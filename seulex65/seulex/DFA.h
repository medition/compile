#include "State.h"
#include <stack>
class DFA
{
	deque <State *> m_DFAtable;

	deque <State *> m_NFAtable;

	set <char> m_inputcharset;

	int m_nNextStateID;
	
public:	
	DFA(){};
	DFA(set <char> , deque <State *>);
	~DFA(){};

	void EpsilonClosure(set<State*> ,set <State *> &);	//求对应状态集的 EpsilonClosure

	void Move(char , set<State*> , set<State*> &);	//状态集T经过输入字符input可以到达的新的状态的集合

	void ConvertNFAtoDFA();//NFA转化为DFA

	void Reduce();//最小化DFA；

	void Find(string);	//对输入的字符，根据DFA进行模式匹配
	deque<State*>& getDFATable();

	void show();//测试展示函数
};