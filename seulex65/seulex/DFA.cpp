#include "DFA.h"
//���캯��
DFA::DFA(set <char> inputcharset, deque <State *> nfatable)
{
	this->m_inputcharset = inputcharset;
	this->m_NFAtable = nfatable;
}

//���epsilon�հ�
void DFA::EpsilonClosure(set<State*> T,set<State *> & Res){
	Res.clear();
	//set�հ������Լ�
	Res = T;
	stack <State *> unprocessdStack;
	set <State *> ::iterator iter;
	//��T����ջ��
	for (iter = T.begin();iter != T.end();++iter)
	{
		unprocessdStack.push(*iter);
	}
	//��ջ���в���
	while ( !unprocessdStack.empty())
	{
		//��õ�һ��Ԫ��
		State *temp = unprocessdStack.top();
		unprocessdStack.pop();
		//��ø�״̬��epsilon����
		vector <State *> epsilonClosure;
		temp->getTransition(char(0),epsilonClosure);
		//������һ��temp״̬����epsilon�����״̬u
		for (int i = 0;i < epsilonClosure.size();++i)
		{
			State * u = epsilonClosure[i];
			//���u����Res��
			if (Res.find(u) == Res.end())
			{
				Res.insert(u);
				unprocessdStack.push(u);
			}
		}
	}
}

//����ض������״̬��
void DFA::Move(char inputchar, set<State*> T, set<State*> &Res){
	Res.clear();
	set <State *>::iterator iter;
	//����״̬��T
	for (iter = T.begin();iter != T.end();++iter)
	{
		State * pState = *iter;
		vector <State *> States;
		pState->getTransition(inputchar,States);
		//�Ѷ�Ӧ�ַ���ת������Res
		for (int i =0;i < States.size();++i)
			Res.insert(States[i]);
	}
}

//NFAת��ΪDFA
void DFA::ConvertNFAtoDFA(){
	//���DFATable
	for (int i = 0; i < m_DFAtable.size();++i)
		delete m_DFAtable[i];
	m_DFAtable.clear();
	//�ж�NFATable�Ƿ�Ϊ��
	if (m_NFAtable.size() == 0){
		cout<<"m_NFAtable is empty !\n";
		return;
	}
	//״̬��
	m_nNextStateID = -1;
	//δ�����DFA״̬
	vector <State *> unprocessedStates;
	//NFA��DFA�ıհ�����
	set<State *> DFAStartStateSet;
	set<State *> NFAStartStateSet;
	//���뿪ʼ��s0
	NFAStartStateSet.insert(m_NFAtable[0]);
	//s0�հ���DFA,��ʼ״̬
	EpsilonClosure(NFAStartStateSet,DFAStartStateSet);
	//���DFA��ʼ״̬
	State *DFAStartState = new State(DFAStartStateSet, ++m_nNextStateID);
	//����DFA����
	m_DFAtable.push_back(DFAStartState);
	//����DFAδ����״̬����
	unprocessedStates.push_back(DFAStartState);
	//����δ����״̬
	while (!unprocessedStates.empty())
	{
		//����һ��δ�����״̬
		State * processingDFAState = unprocessedStates.back();
		unprocessedStates.pop_back();
		//��������ַ���������
		set <char>::iterator iter;
		for (iter = m_inputcharset.begin();iter != m_inputcharset.end();++iter)
		{
			set <State *> MoveRes, EpsilonClosureRes;
			//���ض��ַ���Move set
			Move(*iter,processingDFAState->getNFAset(),MoveRes);
			//�ض��ַ�Move set�ıհ�
			EpsilonClosure(MoveRes,EpsilonClosureRes);
			//�жϽ����EpsilonClosureRes�Ѿ���DFA��״̬����
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
				//ֻ��Ϊ�ǿյ�ʱ��
				if(!EpsilonClosureRes.empty()){
					//�����µ�DFA״̬
					State * u = new State(EpsilonClosureRes,++m_nNextStateID);
					//��״̬���ӵ�δ����״̬��DFA����
					unprocessedStates.push_back(u);
					m_DFAtable.push_back(u);
					//�������ڴ���״̬���ַ�����״̬������
					processingDFAState->addTransition(*iter,u);
				}
			} 
			else
			{
				//��õıհ���Ӧ��״̬�Ѿ�������DFA���У��������ڴ���״̬�������ַ����Ѵ���״̬������
				processingDFAState->addTransition(*iter,s);
			}
		}
	}
}

//��С��
void DFA::Reduce(){
	set <State *> DeadEndSet;
	//��úڶ��ڵ�
	for (int i = 0; i < m_DFAtable.size(); ++i)
	{
		if (m_DFAtable[i]->isDeadEnd())
			DeadEndSet.insert(m_DFAtable[i]);
		//���û�зǽ���״̬���˳�
		if (DeadEndSet.empty())
			return;
		set<State*>::iterator iter;
		for(iter=DeadEndSet.begin(); iter!=DeadEndSet.end(); ++iter)
		{
			// �Ƴ�������ֹ״̬����������
			for(int i=0; i<m_DFAtable.size(); ++i)
				m_DFAtable[i]->removeTransitoin(*iter);

			// ��ȡ���кڶ��ڵ��λ��
			deque<State*>::iterator pos;
			for(pos=m_DFAtable.begin(); pos != m_DFAtable.end(); ++pos)
				if(*pos == *iter)
					break;
			// �ӱ��в�����λ�õ�״̬
			m_DFAtable.erase(pos);

			// ��ո�Ԫ����ռ�õ��ڴ�
			delete *iter;
		}
	}
}

//������ʾ
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
