#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool func(int number, int cifra)
{
	if (number == 0)
		return false;
	else if (number % 10 == cifra)
	return true;
	else
		return func(number / 10, cifra);
}

bool br(int digit)
{
	int br = 0;
	while (digit != 0)
	{
		br++;
		digit /= 10;
	}
}

bool have(int number, int cifra)
{
	if (number == 0)
		return false;
	else if (number % (int)pow(10,br(cifra)) == cifra)
		return true;
	else
		return func(number / 10, cifra);
}

int main()

{
	int number, digit;

	cout << "Type a number: ";
	cin >> number;
	cout << "Type a digit: ";
	cin >> digit;
	
	int frombonus;
	cout << "Type the bonus: "; 
	cin >> frombonus;
	
	if (func(number, digit) == 0)
		cout << "-> false" << endl;
	else
		cout << "-> true" << endl;

	cout << have(number, frombonus) << endl;

	system("PAUSE");
	return 0;
}