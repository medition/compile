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

	void EpsilonClosure(set<State*> ,set <State *> &);	//���Ӧ״̬���� EpsilonClosure

	void Move(char , set<State*> , set<State*> &);	//״̬��T���������ַ�input���Ե�����µ�״̬�ļ���

	void ConvertNFAtoDFA();//NFAת��ΪDFA

	void Reduce();//��С��DFA��

	void Find(string);	//��������ַ�������DFA����ģʽƥ��
	deque<State*>& getDFATable();

	void show();//����չʾ����
};