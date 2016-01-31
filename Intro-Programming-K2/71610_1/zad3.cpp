#include<iostream>
#include<cstring>
using namespace std;
//äàëè å àðèòìåòè÷åí ñèìâîë
bool issymbol(char a)
{
	return a == '*' || a == '/' || a == '+' || a == '-';
}
//äàëè å ÷èñëî
bool isnumber(char a)
{
	return a >= '0' && a <= '9';
}
//äàëè å âàëèäåí ñèìâîë
bool validsymbol(char a)
{
	return isnumber(a) == true || issymbol(a) == true;
}
//äàëè èçðàçúò å âàëèäåí
bool isvalid(char a[100])
{
	//ïðîâåðÿâàìå äàëè ïúðâèÿò è ïîñëåäåí ñèìâîë ñà àðèòìåòè÷íè ñèìâîëè
	if (issymbol(a[0]) || issymbol(a[strlen(a) - 1]))
		return false;
	for (int i = 0; i < strlen(a); i++)
	{
		//ìàõàìå ïðàçíèòå ìåñòà
		if (a[i] == ' ')
		{

			for (int j = i; j < strlen(a); j++)
			{
				a[j] = a[j + 1];
			}
		}
		//ïðîâåðÿâàìå äàëè å âàëèäåí ñèìâîë
		if (validsymbol(a[i]) == false)
			return false;
		//ïðîâåðÿâàìå äàëè å ÷èñëî
		if (issymbol(a[i]) && (issymbol(a[i + 1]) || issymbol(a[i - 1])))
		{
			return false;
		}

	}
	//àêî äîñåãà íå å íàìåðèëî ïðîëåì, çíà÷è å âàëèäíà ôóíêöèÿ
	return true;
}
int main()
{
	char func[100];
	cin.getline(func, 100);
	cout << isvalid(func) << endl;
	system("pause");
	return 0;
}

// 0.8/1.5