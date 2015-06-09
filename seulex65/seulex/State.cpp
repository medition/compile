#include "State.h"

State::State() :stateID(-1), AcceptState(false)
{};

State::State(int nId) :stateID(nId), AcceptState(false)
{};

State::State(const State& other)
{
	*this = other;
}

//从其他子集状态构造一个新的状态
State::State(set<State*> states, int nId)
{
	m_NFAstateset = states;
	stateID = nId;
	AcceptState = false;
	set<State*>::iterator iter;
	//其他状态存在接受状态，则新的状态是接收状态
	for (iter = states.begin(); iter != states.end(); iter++)
	{
		if ((*iter)->isAcceptState())
		{
			AcceptState = true;
			patternId = (*iter)->patternId;
		}
	}
}

//增加路径
void State::addTransition(char in, State* next)
{
	m_statemap.insert(make_pair(in, next));
}

//获取路径
void State::getTransition(char in, vector<State*> &states)
{
	//容器清空
	states.clear();
	multimap<char, State*>::iterator lower, upper;
	upper = m_statemap.upper_bound(in);
	for (lower = m_statemap.lower_bound(in); lower != upper; ++lower)
	{
		states.push_back(lower->second);
	}
}

//删除路径
void State::removeTransitoin(State *state)
{
	multimap<char, State*>::iterator iter;
	for (iter = m_statemap.begin(); iter != m_statemap.end();)
	{
		State *tostate = iter->second;
		if (tostate == state)
			m_statemap.erase(iter++);
		else
		{
			++iter;
		}
	}
}

//是否是终止状态
bool State::isAcceptState()
{
	return this->AcceptState;
}

//返回状态号
int State::getStateId(){
	return this->stateID;
}

//重载
void State::operator =(const State &other)
{
	stateID = other.stateID;
	m_NFAstateset = other.m_NFAstateset;
	m_statemap = other.m_statemap;
}

//用于判断两个DFA是否相等
bool State::operator ==(const State& other)
{
	if (m_NFAstateset.empty())		//判断NFA的状态节点是否相等
		return (stateID == other.stateID);
	else			//判断DFA的状态节点是否相等
		return (m_NFAstateset == other.m_NFAstateset);
}

//设置接收状态
void State::setAcceptState(bool ac)
{
	AcceptState = ac;
}

//在DFA中获得NFA的set
set <State *> State::getNFAset(){
	return m_NFAstateset;
}
multimap<char, State*>& State::getM_StateMap()
{
	return this->m_statemap;
}

//无外连接的非终止节点
bool State::isDeadEnd(){
	//是终止状态则是非死节点
	if (AcceptState)
	{
		return false;
	}
	//连接集合是空则是死节点
	if (m_statemap.empty())
	{
		return true;
	}

	//连接集合非空
	multimap <char ,State *>::iterator iter;
	for (iter = m_statemap.begin();iter != m_statemap.end();++iter)
	{
		State * toState = (*iter).second;
		//存在外连接，返回非死节点
		if (!(*toState == *this))
			return false;
	}
	cout<<stateID<<"is deadendnode! "<<endl;
	return true;
}