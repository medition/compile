#include "DFA.h"
//构造函数
DFA::DFA(set <char> inputcharset, deque <State *> nfatable)
{
	this->m_inputcharset = inputcharset;
	this->m_NFAtable = nfatable;
}

//获得epsilon闭包
void DFA::EpsilonClosure(set<State*> T,set<State *> & Res){
	Res.clear();
	//set闭包包含自己
	Res = T;
	stack <State *> unprocessdStack;
	set <State *> ::iterator iter;
	//把T放入栈中
	for (iter = T.begin();iter != T.end();++iter)
	{
		unprocessdStack.push(*iter);
	}
	//对栈进行操作
	while ( !unprocessdStack.empty())
	{
		//获得第一个元素
		State *temp = unprocessdStack.top();
		unprocessdStack.pop();
		//获得该状态的epsilon传递
		vector <State *> epsilonClosure;
		temp->getTransition(char(0),epsilonClosure);
		//遍历第一个temp状态经过epsilon到达的状态u
		for (int i = 0;i < epsilonClosure.size();++i)
		{
			State * u = epsilonClosure[i];
			//如果u不在Res中
			if (Res.find(u) == Res.end())
			{
				Res.insert(u);
				unprocessdStack.push(u);
			}
		}
	}
}

//获得特定输入的状态集
void DFA::Move(char inputchar, set<State*> T, set<State*> &Res){
	Res.clear();
	set <State *>::iterator iter;
	//遍历状态集T
	for (iter = T.begin();iter != T.end();++iter)
	{
		State * pState = *iter;
		vector <State *> States;
		pState->getTransition(inputchar,States);
		//把对应字符的转换加入Res
		for (int i =0;i < States.size();++i)
			Res.insert(States[i]);
	}
}

//NFA转化为DFA
void DFA::ConvertNFAtoDFA(){
	//清空DFATable
	for (int i = 0; i < m_DFAtable.size();++i)
		delete m_DFAtable[i];
	m_DFAtable.clear();
	//判断NFATable是否为空
	if (m_NFAtable.size() == 0){
		cout<<"m_NFAtable is empty !\n";
		return;
	}
	//状态号
	m_nNextStateID = -1;
	//未处理的DFA状态
	vector <State *> unprocessedStates;
	//NFA和DFA的闭包集合
	set<State *> DFAStartStateSet;
	set<State *> NFAStartStateSet;
	//插入开始的s0
	NFAStartStateSet.insert(m_NFAtable[0]);
	//s0闭包给DFA,开始状态
	EpsilonClosure(NFAStartStateSet,DFAStartStateSet);
	//获得DFA开始状态
	State *DFAStartState = new State(DFAStartStateSet, ++m_nNextStateID);
	//加入DFA表中
	m_DFAtable.push_back(DFAStartState);
	//加入DFA未处理状态表中
	unprocessedStates.push_back(DFAStartState);
	//遍历未处理状态
	while (!unprocessedStates.empty())
	{
		//处理一个未处理的状态
		State * processingDFAState = unprocessedStates.back();
		unprocessedStates.pop_back();
		//针对输入字符集做处理
		set <char>::iterator iter;
		for (iter = m_inputcharset.begin();iter != m_inputcharset.end();++iter)
		{
			set <State *> MoveRes, EpsilonClosureRes;
			//求特定字符的Move set
			Move(*iter,processingDFAState->getNFAset(),MoveRes);
			//特定字符Move set的闭包
			EpsilonClosure(MoveRes,EpsilonClosureRes);
			//判断结果集EpsilonClosureRes已经在DFA的状态当中
			bool found = false;
			State * s = NULL;
			for (int i = 0;i < m_DFAtable.size();++i)
			{
				s = m_DFAtable[i];
				if (s->getNFAset() == EpsilonClosureRes)
				{
					found = true ;
					break;
				}
			}
			if (!found)
			{
				//只有为非空的时候
				if(!EpsilonClosureRes.empty()){
					//创建新的DFA状态
					State * u = new State(EpsilonClosureRes,++m_nNextStateID);
					//新状态增加到未处理状态和DFA表中
					unprocessedStates.push_back(u);
					m_DFAtable.push_back(u);
					//增加正在处理状态该字符到新状态的连接
					processingDFAState->addTransition(*iter,u);
				}
			} 
			else
			{
				//获得的闭包对应的状态已经存在于DFA表中，增加正在处理状态经过该字符到已存在状态的连接
				processingDFAState->addTransition(*iter,s);
			}
		}
	}
}

//最小化
void DFA::Reduce(){
	set <State *> DeadEndSet;
	//获得黑洞节点
	for (int i = 0; i < m_DFAtable.size(); ++i)
	{
		if (m_DFAtable[i]->isDeadEnd())
			DeadEndSet.insert(m_DFAtable[i]);
		//如果没有非接受状态则退出
		if (DeadEndSet.empty())
			return;
		set<State*>::iterator iter;
		for(iter=DeadEndSet.begin(); iter!=DeadEndSet.end(); ++iter)
		{
			// 移除到该终止状态的所有连接
			for(int i=0; i<m_DFAtable.size(); ++i)
				m_DFAtable[i]->removeTransitoin(*iter);

			// 获取表中黑洞节点的位置
			deque<State*>::iterator pos;
			for(pos=m_DFAtable.begin(); pos != m_DFAtable.end(); ++pos)
				if(*pos == *iter)
					break;
			// 从表中擦出该位置的状态
			m_DFAtable.erase(pos);

			// 清空该元素所占用的内存
			delete *iter;
		}
	}
}

//辅助显示
void DFA::show(){
	deque<State *>::iterator iter;
	set <State *>::iterator i;
	for (iter = m_DFAtable.begin();iter != m_DFAtable.end();++iter)
	{
		for (i = (*iter)->m_NFAstateset.begin();i != (*iter)->m_NFAstateset.end();++i)
		{
			cout<<(*i)->stateID<<" ";
		}
		if ((*iter)->isAcceptState())
		{
			cout<<"stop state ! ";
		}
		cout<<"state id "<<(*iter)->getStateId()<<endl;
	}
}
deque<State*>& DFA::getDFATable()
{
	return this->m_DFAtable;
}
