#pragma once
#include <iostream>
#include <deque>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

class State
{
public:
	int stateID;

	multimap <char, State*> m_statemap;	//从改状态到其他状态的移径

	set<State*> m_NFAstateset;	//DFA状态中包含的NFA状态集

	bool AcceptState;//是否是接收状态
	int patternId;

public:
	State();
	//各种初始化函数
	State(int nId);
	State(const State &other);
	State(set<State*> states, int nId);

	void addTransition(char, State *);//增加路径

	void getTransition(char, vector<State*> &);//获得特殊字符的所有路径

	void removeTransitoin(State* state);//删除到特定状态的所有连接

	bool isAcceptState();//是否是终止状态

	int  getStateId();//获得状态id

	void setAcceptState(bool);//设置接收状态

	set <State *> getNFAset();//在DFA中获得NFA的set

	bool isDeadEnd();//用于dfa最小化，是无外连接的非终止节点
	multimap<char, State*>& getM_StateMap();

	void operator=(const State& other);
	bool operator==(const State& other);
};