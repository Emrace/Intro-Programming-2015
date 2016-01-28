#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool DoIt(int number, int search)
{
	if (number == 0)
		return false;
	else if (number % 10 == search)
		return true;
	else
		return DoIt(number / 10, search);
}

int CountSearchDigit(int digit)
{
	int br = 0;
	while (digit != 0)
	{
		br++;
		digit = digit / 10;
	}

	return br;
}

bool Bonus(int number, int search)
{
	if (number == 0 && number % (int)pow(10, CountSearchDigit(search) - 1) == 0)
		return false;
	else if (number % (int)pow(10 ,CountSearchDigit(search)) == search)
		return true;
	else
		return DoIt(number / 10, search);
}



int main()
{
	char str[101];

	int number, search, bonus;
	cout << "number: "; cin >> number;
	cout << "search: "; cin >> search;
	cout << "bonus: "; cin >> bonus;


	cout << DoIt(number, search)<<endl;
	cout << Bonus(number, bonus);


	system("PAUSE");
	return 0;
}