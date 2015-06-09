#include <iostream>
#include <string>


#include <stdio.h>
#define  ID		1
#define  NUM		2

#define S 6
#define  SUB		3
#define  SUB_MUL	4
#define  INT		5
#define  FOR            10
using namespace std;
#define START 0
#define ERROR 65536
//yylex
int yylex(string lexstr)
{
	int length = lexstr.length();
	int state = START;
	for (int i = 0; i <= length; ++i)
	{
		switch(state)
		{
			case 0:
			{
				if (lexstr[i] == '-')
				{
					state = 1;
					break;
				}
				else if (lexstr[i] == '0')
				{
					state = 2;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 3;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 4;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 5;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 6;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 7;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 8;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 9;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 10;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 11;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 12;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 13;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 14;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 15;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 16;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 17;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 18;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 19;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 20;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 21;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 22;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 23;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 24;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 25;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 26;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 27;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 28;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 29;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 30;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 31;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 32;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 33;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 34;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 35;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 36;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 37;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 1:
			{
				if (i == length)
				{
					return SUB;
					break;
				}
				if (lexstr[i] == '=')
				{
					state = 90;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 2:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 3:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 4:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 5:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 6:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 7:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 8:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 9:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 10:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 11:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 12:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 78;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 79;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 13:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 14:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 15:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 16:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 17:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 76;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 18:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 19:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 20:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 74;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 21:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 22:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 23:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 24:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 25:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 26:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 27:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 28:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 29:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 30:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 31:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 32:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 33:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 34:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 35:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 36:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 37:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 38:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 39:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 40:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 41:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 42:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 43:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 44:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 45:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 46:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 47:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 48:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 49:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 50:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 51:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 52:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 53:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 54:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 55:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 56:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 57:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 58:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 59:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 60:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 61:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 62:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 63:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 64:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 65:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 66:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 67:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 68:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 69:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 70:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 71:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 72:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 73:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 74:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 75;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 75:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 76:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 77;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 77:
			{
				if (i == length)
				{
					return FOR;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 78:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 78;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 79;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 79:
			{
				if (i == length)
				{
					return ID;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 38;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 39;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 40;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 41;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 42;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 43;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 44;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 45;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 46;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 47;
					break;
				}
				else if (lexstr[i] == 'a')
				{
					state = 48;
					break;
				}
				else if (lexstr[i] == 'b')
				{
					state = 49;
					break;
				}
				else if (lexstr[i] == 'c')
				{
					state = 50;
					break;
				}
				else if (lexstr[i] == 'd')
				{
					state = 51;
					break;
				}
				else if (lexstr[i] == 'e')
				{
					state = 52;
					break;
				}
				else if (lexstr[i] == 'f')
				{
					state = 53;
					break;
				}
				else if (lexstr[i] == 'g')
				{
					state = 54;
					break;
				}
				else if (lexstr[i] == 'h')
				{
					state = 55;
					break;
				}
				else if (lexstr[i] == 'i')
				{
					state = 56;
					break;
				}
				else if (lexstr[i] == 'j')
				{
					state = 57;
					break;
				}
				else if (lexstr[i] == 'k')
				{
					state = 58;
					break;
				}
				else if (lexstr[i] == 'l')
				{
					state = 59;
					break;
				}
				else if (lexstr[i] == 'm')
				{
					state = 60;
					break;
				}
				else if (lexstr[i] == 'n')
				{
					state = 61;
					break;
				}
				else if (lexstr[i] == 'o')
				{
					state = 62;
					break;
				}
				else if (lexstr[i] == 'p')
				{
					state = 63;
					break;
				}
				else if (lexstr[i] == 'q')
				{
					state = 64;
					break;
				}
				else if (lexstr[i] == 'r')
				{
					state = 65;
					break;
				}
				else if (lexstr[i] == 's')
				{
					state = 66;
					break;
				}
				else if (lexstr[i] == 't')
				{
					state = 67;
					break;
				}
				else if (lexstr[i] == 'u')
				{
					state = 68;
					break;
				}
				else if (lexstr[i] == 'v')
				{
					state = 69;
					break;
				}
				else if (lexstr[i] == 'w')
				{
					state = 70;
					break;
				}
				else if (lexstr[i] == 'x')
				{
					state = 71;
					break;
				}
				else if (lexstr[i] == 'y')
				{
					state = 72;
					break;
				}
				else if (lexstr[i] == 'z')
				{
					state = 73;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 80:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 81:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 82:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 83:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 84:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 85:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 86:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 87:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 88:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 89:
			{
				if (i == length)
				{
					return NUM;
					break;
				}
				if (lexstr[i] == '0')
				{
					state = 80;
					break;
				}
				else if (lexstr[i] == '1')
				{
					state = 81;
					break;
				}
				else if (lexstr[i] == '2')
				{
					state = 82;
					break;
				}
				else if (lexstr[i] == '3')
				{
					state = 83;
					break;
				}
				else if (lexstr[i] == '4')
				{
					state = 84;
					break;
				}
				else if (lexstr[i] == '5')
				{
					state = 85;
					break;
				}
				else if (lexstr[i] == '6')
				{
					state = 86;
					break;
				}
				else if (lexstr[i] == '7')
				{
					state = 87;
					break;
				}
				else if (lexstr[i] == '8')
				{
					state = 88;
					break;
				}
				else if (lexstr[i] == '9')
				{
					state = 89;
					break;
				}
				else 
				{
					state = ERROR;
					break;
				}
			}
			case 90:
			{
				if (i == length)
				{
					return SUB_MUL;
					break;
				}

				{
					state = ERROR;
					break;
				}
			}
			case ERROR:
				{
					cout<<"error"<<endl;
					return -1;
				}
		}
	}
}

int main()
{
	string s;
        while(true){
            cin>>s;
            cout<<yylex(s)<<endl;
        }
	return 0;
}