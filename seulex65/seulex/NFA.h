#ifndef _NFA_H
#define _NFA_H

#include <iostream>
#include <deque>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <string>
#include "State.h"

typedef deque<State*> NFATable;

class NFA
{
private:
	stack<NFATable> m_OperandStack;  //NFA表的操作栈

	NFATable m_nfaTalbe;

	set<char> m_inputset;

	map<string, string> m_RE_Map; //RE的id 和表达式的映射

	string REid;
public:
	NFA();
	NFA( NFA& );
	~NFA(){};

	//重载
	void operator=(const NFA& other);

	//对stack<NFATable>进行操作
	void Push(char input);
	bool Pop(NFATable& );

	//NFA操作函数
	void Contact();//连接操作
	void Start();//闭包操作0次或多次匹配
	void Union();//或操作
	void Add();//加号 至少匹配一次
	void Question();//?操作 匹配1次或0次
	void Escape();//转义符

	//创建函数
	void createNFA(string strRE, int patternId);

	//预处理添加连接符
	string  prepocess(string strRE);
	string processDash(string str);

	//获得私有成员
	NFATable& getNFAtable();
	set<char> getM_inputset();

	//判断函数
	bool isletter(char in);
	bool isNumber(char in);
	bool isOperator(char in);

	//匹配字符对应的操作
	void match(char in);

	//获取字符对应的优先级
	int Priority(char ochar);

	//测试打印函数
	void show();

};
#endif // !_NFA_H