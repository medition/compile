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
	stack<NFATable> m_OperandStack;  //NFA��Ĳ���ջ

	NFATable m_nfaTalbe;

	set<char> m_inputset;

	map<string, string> m_RE_Map; //RE��id �ͱ��ʽ��ӳ��

	string REid;
public:
	NFA();
	NFA( NFA& );
	~NFA(){};

	//����
	void operator=(const NFA& other);

	//��stack<NFATable>���в���
	void Push(char input);
	bool Pop(NFATable& );

	//NFA��������
	void Contact();//���Ӳ���
	void Start();//�հ�����0�λ���ƥ��
	void Union();//�����
	void Add();//�Ӻ� ����ƥ��һ��
	void Question();//?���� ƥ��1�λ�0��
	void Escape();//ת���

	//��������
	void createNFA(string strRE, int patternId);

	//Ԥ����������ӷ�
	string  prepocess(string strRE);
	string processDash(string str);

	//���˽�г�Ա
	NFATable& getNFAtable();
	set<char> getM_inputset();

	//�жϺ���
	bool isletter(char in);
	bool isNumber(char in);
	bool isOperator(char in);

	//ƥ���ַ���Ӧ�Ĳ���
	void match(char in);

	//��ȡ�ַ���Ӧ�����ȼ�
	int Priority(char ochar);

	//���Դ�ӡ����
	void show();

};
#endif // !_NFA_H