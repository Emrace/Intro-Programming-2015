#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool digitsSymbols(char znak) // znak =:: digit or symbol
{

	if ((znak >= '1' && znak <= '9') || znak == '+' || znak == '-' || znak == '*' || znak == '/')
		return true;
	else
		return false;

}

bool isValid(char izraz[])
{
	switch (izraz[0])
	{
	case '+': 
	case '-':
	case '/':
	case '*':
		return false;
	}

	switch (izraz[strlen(izraz) - 1]) 

	{
	case '+':
	case '-':
	case '/':
	case '*':
		return false;
	}
	int m;
	bool boolean = false;
	for (m = 1; m < strlen(izraz) - 1; m++)
	{


		if (digitsSymbols(izraz[m]))
		{
			return false;
		}
		if (izraz[m] >= '0' && izraz[m] <= '9' && izraz[m + 1] == ' ')
		{
			boolean = true;
			m++;
		}


		if (izraz[m + 1] == ' ')
		{
			if (izraz[m] >= '0' && izraz[m] <= '9')
			{
				boolean = true;
				m++;
			}
			if (izraz[m] == '+' || izraz[m] == '-' || izraz[m] == '*' || izraz[m] == '/')
				boolean = true;
		}


	}



}




int main()
{
	
	char niz[101];
	cin.getline(niz, 100);
	cout << char(isValid);












	system("PAUSE");
	return 0;
}