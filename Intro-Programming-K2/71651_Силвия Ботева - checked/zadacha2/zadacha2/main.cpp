#include <iostream> // zadacha2
using namespace std;

bool recursion(int digit, int number)
{
	if (number == 0)
		return false;
	if (number % 10 == digit)
		return true;
	return recursion(digit, number / 10);
}
bool bonus(int number1, int number)
{
	if (number == 0)
		return false;
	if (number % 100 == number1)
		return true;
	return bonus(number1, number / 100);
}

int main()
{
	int digit, number;
	cout << "Vuvedi cifra: ";
	cin >> digit;
	cout << "Vuvedi chislo: ";
	cin >> number;

	int number1;
	cout << "Vuvedi drugo chislo: ";
	cin >> number1;

	cout << recursion(digit, number) << boolalpha << endl;
	cout << bonus(number1, number) << boolalpha << endl;

	system("pause");
	return 0;
}

// 1.4
