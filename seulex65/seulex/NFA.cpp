#include "NFA.h"
#include "common.h"
NFA::NFA() 
{}
NFA::NFA(NFA& nfa)
{
	m_inputset = nfa.m_inputset;
	m_nfaTalbe = nfa.m_nfaTalbe;
}
void NFA::Push(char input)
{
	State *startState = new State(m_Count++);
	State *endState = new State(m_Count++);
	startState->addTransition(input, endState);

	NFATable  nfaTable;
	nfaTable.push_back(startState);
	nfaTable.push_back(endState);
	
	m_OperandStack.push(nfaTable);
	m_inputset.insert(input);
}
//操作数栈弹第一个到nfaTable
bool NFA::Pop(NFATable &nfaTable){
	//非空
	if (!this->m_OperandStack.empty())
	{
		//取值
		nfaTable = m_OperandStack.top();
		m_OperandStack.pop();
		return true;
	}
	return false;
}
/*预处理regular expression添加连接符*/
string NFA::prepocess(string strRE)
{// strRE 未处理的RE，包含REid 和 正规表达式两部分
	string pstr;
	int length = strRE.length();
	int i,flag = 0;	//flag>0标识读到括号
	for (i = 0; i < length - 1; i++)
	{
		char leftchar = strRE.at(i);
		char rightchar = strRE.at(i + 1);
		pstr += leftchar;
		if (!isOperator(leftchar)){
			if (rightchar != 42 && rightchar != 93 && rightchar != 125 && rightchar != 43 && rightchar != 63 &&
				rightchar != 41 && rightchar != 45 && rightchar!= 124)
				pstr += char(46);
		}
		else
		{
			if (leftchar != 91 && leftchar != 123  && leftchar != 40 && leftchar != 124 && 
				leftchar != 92 && (rightchar == '[' || rightchar == '{'|| rightchar == '('||!isOperator(rightchar)))
				pstr += char(46);
		}		
	}
	pstr += strRE.at(i);
	cout<< pstr.length()<<" "<< pstr << endl;
	m_RE_Map.insert(make_pair(REid, pstr));
	cout<<"after preprocess : "<<pstr<<endl;
	return pstr;
}
/*处理方括号以及带有dash -运算符的方括号*/
string NFA::processDash(string str)
{
	string strRes;
	//	strRes.append(str,0,1);
	int i;
	bool flag = false;
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] == 91)
		{
			strRes += char(40);
			flag = true;
			continue;
		}
		else if (str[i] == 93)
		{
			strRes.pop_back();
			strRes += char(41);
			flag = false;
			continue;
		}
		if (flag){
			if (str[i] == 45)
			{
				if (i == str.length() - 1)
					cout << "No match for [" << endl;
				int left = int(str[i - 1]) + 1;
				int right = int(str[i + 1]);
				for (; left < right; left++)
					strRes = strRes + char(left) + char(124);
				continue;
			}
			strRes = strRes + str[i] + char(124);
			continue;
		}
		strRes += str[i];

	}
//	str[i] == 93 ? strRes += char(41) : strRes += str[i];

	return strRes;
}

bool NFA::isletter(char in)
{
	return ((in >= 65 && in <= 90) || (in >= 97 && in <= 122));
}

bool NFA::isNumber(char in)
{
	return (in >= 48 && in <= 57);
}

bool NFA::isOperator(char in)
{
	if (in == 42 || in == 43 || in == 63 || in == 92 || in == 91 || in == 93
		||in == 123|| in == 125||in == 124 ||in == 40||in == 41|| in == 46)
		return true;
	return false;
}

int NFA::Priority(char ochar)
{
	if (ochar == 92)
		return 5;
	if (ochar == 40 || ochar == 91)
		return 4;
	if (ochar == 42 || ochar == 43 || ochar == 63 || ochar == 123)
		return 3;
	if (ochar == 46)
		return 2;
	if (ochar == 124)
		return 1;
}
void NFA::createNFA(string str, int patternId)
{
	str = prepocess(str);
	stack<char> opStack;
	int length = str.length();
	int i=0;
	/*push input set and change order to reverse Polish*/
	for (; i < length;i++){
		if (!isOperator(str[i]))
			Push(str[i]);
		else if (str[i] == 41)	/*读入右括号，操作符栈弹栈直到弹出左括号*/
		{
			if (opStack.empty())
				exit(1);
			char top = opStack.top();
			//循环到左括号
			while (top != 40){
				match(top);
				opStack.pop();
				if (opStack.empty())
					exit(1);
				top = opStack.top();
			}
			opStack.pop();
		}
		else if (str[i] == 40)
			opStack.push(str[i]);
		else  /*普通操作符 */
		{
			if (opStack.empty()||Priority(str[i]) > Priority(opStack.top())||opStack.top() == 40)
				opStack.push(str[i]);
			else
			{
				char top = opStack.top();
				while (Priority(top) >= Priority(str[i])&& top != 40)
				{
					match(top);
					opStack.pop();
					if (opStack.empty())
						break;
					top = opStack.top();
				}
				opStack.push(str[i]);

			}

		}
	}
	while (!opStack.empty()) /**/
	{
		char top = opStack.top();
		match(top);
		opStack.pop();
	}
	NFATable *p;
	p = &m_OperandStack.top();
	p->back()->setAcceptState(true);
	p->back()->patternId = patternId;
	cout << "createNFA:" << p->back()->getStateId() << endl;
}

void NFA::match(char in)
{
	switch (in)
	{
	case 42:	//*操作
		Start();
		break;
	case 43:	//+操作
		Add();
		break;
	case 63:	//？操作
		Question();
		break;
	case 124:	//|操作；
		Union();
		break;
	case 46:		//连接操作
		Contact();
		break;

	}
}
void NFA::Union()
{
	NFATable A, B;
	if (!Pop(A) || !Pop(B))
		return;
	State *startState = new State(m_Count++);
	State *endState = new State(m_Count++);
	startState->addTransition(char(0), A.front());
	startState->addTransition(char(0), B.front());
	A[A.size()-1]->addTransition(char(0), endState);
	B[B.size() - 1]->addTransition(char(0), endState);
	
	A.push_front(startState);
	B.push_back(endState);
	A.insert(A.end(), B.begin(), B.end());

	m_OperandStack.push(A);


}
void NFA::Contact()
{
	NFATable A, B;
	//栈的特点，后面的操作数在上面
	if (!Pop(B) || !Pop(A))
		return;

	A.back()->addTransition(char(0),B.front());
	A.insert(A.end(), B.begin(), B.end());
	m_OperandStack.push(A);
}
void NFA::Start()
{
	NFATable A;
	if (!Pop(A))
		return;
	State *startState = new State(m_Count++);
	State *endState = new State(m_Count++);

	startState->addTransition(char(0), endState);
	startState->addTransition(char(0), A[0]);
	A.back()->addTransition(char(0), A[0]);
	A.back()->addTransition(char(0), endState);

	A.push_front(startState);
	A.push_back(endState);
	m_OperandStack.push(A);

}

void NFA::Add()
{
	if (m_OperandStack.empty())
		return;
	NFATable A;
	A = m_OperandStack.top();
	m_OperandStack.push(A);
	Start();
	Contact();
}

void NFA::Question()
{
	NFATable A;
	if (!Pop(A))
		return;
	State *startState = new State(m_Count++);
	State *endState = new State(m_Count++);

	startState->addTransition(char(0), A.front());
	A.back()->addTransition(char(0), endState);
	startState->addTransition(char(0), endState);

	A.push_front(startState);
	A.push_back(endState);
	m_OperandStack.push(A);
}
void NFA:: show()
{
	getNFAtable();
	NFATable a = m_OperandStack.top();
	if (a.empty())
		return;
	NFATable::iterator iter;
	for (iter = a.begin(); iter != a.end(); ++iter)
	{
		cout << (*iter)->getStateId() << endl;
	}
}

NFATable& NFA::getNFAtable(){
	
	while (m_OperandStack.size() > 1)
		Union();
	return m_OperandStack.top();
}

set<char> NFA::getM_inputset()
{
	return this->m_inputset;
}