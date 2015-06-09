#include <iostream>
#include <deque>
#include <map>
#include "NFA.h"
#include "DFA.h"
#include <fstream>
using namespace std;
ifstream iFile;
ofstream oFile;
NFA nfa;
extern DFA dfa;
multimap < int, string> patternActoinMap;
map<string, string> preDefReSet;


#define  DEF_START 0
#define DEF_END 1
#define RULE_START 2
#define  RULE_END 3
#define ERROR 5

//�жϵ�ǰ�����״̬
int checkSection(char c)
{
	
	if (c == '%')
	{
		char cc = iFile.get();
		switch (cc)
		{
		case '{':
			return DEF_START;
		case '}':
			return DEF_END;
		case '%': 
			return RULE_START;
		default:
			iFile.unget();
			break;
		}

	}
	return ERROR;
}
//��ʼ��������
void initial()
{
	string s;
	cout << "�����ļ���ַ" << endl;
	cin >> s;
	iFile.open(s.c_str(), ios::in);
	oFile.open("lex.cpp", ios::out);
	if (!iFile.good())
	{
		cout << "error in read file" << endl;
		exit(1);
	}
	
}
void  processRE(string strRE)
{
	string pstr; //strRE����֮��������ʽ����
	string REid;
	//�����id
	size_t startPos = strRE.find_first_not_of(" \t\n");
	size_t endPos = strRE.find_first_of(" \t\n", startPos);
	REid.clear();
	REid = strRE.substr(startPos, endPos-startPos);

	cout <<  "RE id : " << REid << endl;
	startPos = strRE.find_first_not_of(" \t\n",endPos);
	int length = strRE.length();
	int i, flag = 0;	//flag>0��ʶ��������
	map<string, string>::iterator iter;
	string m_MatchedRE;  //��Ҫƥ���RE���ʽ

	for (i = startPos; i < length ; i++)
	{
		char c = strRE.at(i);
		int offset;
		switch (c)
		{
		case '[':
			flag++;
			pstr.append(1, '(');
			break;
		case ']':
			flag--;
			pstr.erase(pstr.length() - 1);
			pstr.append(1, ')');
			break;
		case '{':
			pstr.append(1, '(');
			offset = strRE.find_first_of("}", i);
			m_MatchedRE = strRE.substr(i + 1, offset - i - 1);
			iter = preDefReSet.find(m_MatchedRE);
			if (iter == preDefReSet.end())
			{
				cout << "can not find:" << m_MatchedRE << endl;
				exit(1);
			}
			pstr += iter->second;
			pstr.append(1, ')');
			i = offset;
			break;
		case '-':
			if (flag > 0)
			{
				char left = strRE[i - 1];
				char right = strRE[i + 1];
				for (left++; left < right; left++)
					pstr = pstr + char(left) + char(124);
			}
			else
				pstr.append(1, '-');
			break;
		default:
			if (flag > 0)
				pstr = pstr + c + char(124);
			else
				pstr += c;
			break;
		}
	}
	cout << "RE:" << pstr << endl;
	preDefReSet.insert(make_pair(REid, pstr));
}
void constructLexFile()
{
	//��ȡ%
	char c = iFile.get();
	while (!iFile.eof() && c != '%')
	{
		if (c != ' ' || c != '\n')
		{
			exit(1);
			cout << "wrong formation" << endl;
		}
		iFile >> c;
	}
	//�ļ�����ĩβû�ж���%
	if (iFile.eof())
	{
		cout << "wrong formation of input" << endl;
		exit(1);
	}
	///////////////////////////////////////////////////////////
	int state = checkSection('%');
	//�����
	if (state != DEF_START)
		cout << "error" << endl;
	while (!iFile.eof())
	{
		char c = iFile.get();
		if (c == '%')
			state = checkSection(c);
		if (state == DEF_END)
			break;
		oFile << c;
	}
	//����ν���
	/////////////////////////////////////////////////////////////
	//��ʼɨ������ʽ
	while (!iFile.eof()){
		string restr;
		string reId;
		getline(iFile, restr);
		//��������
		if (restr.find_first_not_of("\t ") == string::npos)
			continue;
		//��һ�ζ���%% ��ʶ����ο�ʼ
		if (restr.find("%%") != string::npos)
		{
			state = RULE_START;
			break;
		}
		processRE(restr);
	}

	//ɨ������ʽ����
	/////////////////////////////////////////////////////////
	//����ο�ʼ
	string pattern;		//ģʽ	
	string action;		//����
	string substr;
	bool flag = true;	//��ʶ����ģʽ���Ƕ���;true��ʾ����ģʽ
	bool replaceflag;	//��ʶ�Ƿ���Ҫ�滻����ε�����ʽ
	preDefReSet.empty() ? replaceflag = false : replaceflag = true;
	int count = 0;
	while (!iFile.eof())
	{
		char c = iFile.get();
		//����\t,\n,�ո��
		if (flag && (c == '\t' || c == '\n' || c == ' '))
			continue;
		//����%�����״̬��������ν�������ѭ��
		if (c == '%')
		{
			state = checkSection(c);
			if (state == RULE_START)
				break;
		}
		//flag��false����ʾ���濪ʼ���붯��
		if (c == '{')
		{
			flag = false;
			continue;
		}
		//flag��true�� ��ʾ���濪ʼ����ģʽ��ͬʱ����ģʽ�Ͷ�����ӳ��
		if (c == '}')
		{
			flag = true;
			nfa.createNFA(pattern,count++);
			patternActoinMap.insert(make_pair(count-1, action));
			pattern.clear();
			action.clear();
			continue;
		}
		
		if (flag)
			//����ģʽ�׶�
		{
			substr += c;
			//��Ҫ�滻����ε�����ʽ
			if (replaceflag)
			{
				//���һλ�����Ƿָ������滻Ԥ���������ʽ
				c = iFile.get();
				if (c == ' ' || c == '\t' || c == '\n' || c == '|')
				{
					map<string, string>::iterator iter = preDefReSet.find(substr);//����substr��Ӧ�Ķ���ε�����ʽ
					if (iter != preDefReSet.end())	//�滻
						pattern += iter->second;
					else
						pattern += substr;
					if (c == '|')
						pattern += '|';
					substr.clear();
				}
				else
					iFile.unget();
			}
		}
		else
			//���붯���׶�
			action += c;
	}
	bool generateLexFnc();
	generateLexFnc();
	while (!iFile.eof())
	{
		char c = iFile.get();
		oFile.put(c);
	}
		
	
}
//����lex����
bool generateLexFnc()
{
	cout << "************generateLexFnc****************" << endl;
	DFA dfa(nfa.getM_inputset(), nfa.getNFAtable());
	dfa.ConvertNFAtoDFA();
	deque<State*> dfaTable = dfa.getDFATable();
	oFile << "using namespace std;" << endl;
	oFile << "#define START 0" << endl;
	oFile << "#define ERROR 65536" << endl;
	oFile << "//yylex" << endl;
	oFile << "int yylex(string lexstr)" << endl;
	oFile << "{" << endl;
	oFile << "\tint length = lexstr.length();" << endl;
	oFile << "\tint state = START;" << endl;
	oFile << "\tfor (int i = 0; i <= length; ++i)" << endl;
	oFile << "\t{\n" << "\t\tswitch(state)" << endl;
	oFile << "\t\t{" << endl;
	for (int i = 0; i < dfaTable.size(); ++i)
	{
		oFile << "\t\t\tcase " << dfaTable[i]->getStateId() << ":" << endl << "\t\t\t{" << endl;
		if (dfaTable[i]->isAcceptState())
		{ 
			oFile << "\t\t\t\tif (i == length)" << endl << "\t\t\t\t{" << endl
				<< "\t\t\t\t\t" << patternActoinMap.find(dfaTable[i]->patternId)->second.c_str() << endl;
			oFile << "\t\t\t\t\tbreak;" << endl << "\t\t\t\t}" << endl;
		}
		multimap <char, State*> m_stateMap = dfaTable[i]->getM_StateMap();
		if (!m_stateMap.empty())
		{
			oFile << "\t\t\t\t";
			multimap <char, State*>::iterator iter = m_stateMap.begin();
			for (; iter != m_stateMap.end(); ++iter)
			{
				oFile << "if (lexstr[i] == '" << iter->first << "')" << endl
					<< "\t\t\t\t{" << "\n\t\t\t\t\tstate = " << iter->second->getStateId() << ";\n"
					<< "\t\t\t\t\tbreak;" << endl << "\t\t\t\t}" << endl << "\t\t\t\telse ";
			}
		}
		oFile << "\n\t\t\t\t{" << endl << "\t\t\t\t\tstate = ERROR;" << endl << "\t\t\t\t\tbreak;"
			<< endl << "\t\t\t\t}" << endl << "\t\t\t}" << endl;
	}
	oFile << "\t\t\tcase ERROR:" << endl << "\t\t\t\t{" << endl << "\t\t\t\t\tcout<<\"error\"<<endl;"
		<< endl << "\t\t\t\t\t" << "return -1;" << endl << "\t\t\t\t}" << endl;
	oFile << "\t\t}" << endl << "\t}" << endl << "}" << endl;
	return true;
}
int main()
{
	/*string re("digit [0-9]");
	string rs("letter [a-zA-Z]");
	string rd("id {digit}*");*/
	initial();
	constructLexFile();
	//generateLexFnc();
// 	string re("id a*b[a-c]");
// 	string rs("num {id}[1-3]");
// 	string rd("name {id}{num}zj");
	//cout << re << endl;
	//NFA nfa;
	//nfa.createNFA(re);
	//nfa.createNFA(rs);
	//nfa.createNFA(rd);
	//nfa.show();
	//cout<<"-------------------"<<endl;
 //	DFA dfa(nfa.getM_inputset(),nfa.getNFAtable());
 //	dfa.ConvertNFAtoDFA();
	//dfa.show();
	//cout<<"-------------------"<<endl;
	//cout<<"after reduce DFA : \n";
	//dfa.Reduce();
 //	dfa.show();
	//while (1)
	//{
	//} 

}
