#include <iostream> // zadacha3
using namespace std;

bool isValid(char *ch, int size = 100)
{
	bool flag;
	for (int i = 0; i < size; i++)
	{
		if (ch[i] != '+' || ch[i] != '-' || ch[i] != '*' || ch[i] != '/' || ch[i] != ' ' || ch[i] != '0' || ch[i] != '2' || ch[i] != '3' || ch[i] != '4' || ch[i] != '5' || ch[i] != '6' || ch[i] != '7' || ch[i] != '8' || ch[i] != '9')
		{
			flag = false;
		}
		else if (ch[0] == '+' || ch[0] == '-' || ch[0] == '*' || ch[0] == '/' || ch[0] == ' ')
		{
			flag = false;
		}
		else if (ch[strlen(ch)] == '+' || ch[strlen(ch)] == '-' || ch[strlen(ch)] == '*' || ch[strlen(ch)] == '/')
		{
			flag = false;
		}
		else
		{
			flag = true;
		}
		
	}


int main()
{
	char ch[100];
	cin >> ch;
	cout << isValid(ch) << endl;
	system("pause");
	return 0;
}
