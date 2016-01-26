#include<iostream>
#include<string>
using namespace std;



bool HaveForbiddenSymbol(char symbol)
{

	if ((symbol >= '1' && symbol <= '9') || symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '=' || symbol == ' ')
		return false;
	return true;

}


bool isValid(char str[])
{
	switch (str[0])
	{
	case '+': case '-': case '/': case '*': case '=':
		return false;
	}

	switch (str[strlen(str) - 1])
	{
	case '+': case '-': case '/': case '*': case '=':
		return false;
	}

	bool flag = false;
	bool opFlag = false;

	for (int i = 0; i < strlen(str); i++)
	{
		

		
			if (flag && str[i] >= '0' && str[i] <= '9')
				return false;
			else
				flag = false;

			if (opFlag)
			{
				switch (str[i])
				{
				case '+': case '-': case '/': case '*': case '=':
					return false;
				}

				switch (str[i + 1])
				{
				case '+': case '-': case '/': case '*': case '=':
					return false;
				}

				opFlag = false;
			}
		

		if (HaveForbiddenSymbol(str[i]))
			return false;
		

		if (str[i + 1] == ' ')
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				flag = true;
				i++;
			}
			if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '=')
				opFlag = true;

		}

		if ((str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '=') && (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*' || str[i + 1] == '/' || str[i + 1] == '='))
			return false;


				
	}
	return true;
}



int main()
{
	char str[101];

	cin.getline(str, 100);
	cout << isValid(str);


	system("PAUSE");
	return 0;
}