#include <iostream>
using namespace std;
int DigNum(int dig, int num)
{
	if (num == 0)
		return 0;
	if (dig == num % 10)
		return 1;
	else
		return DigNum(num / 10, dig);
}
int NumNum(int num1, int num2)
{
	if (num1 < 10)
		return 0;
	if (num1 == num2 % 100)
		return 1;
	else
		return NumNum(num1, num2 / 10);
}



int main()
{
	cout << "Please enter a digit= ";
	int dig;
	cin >> dig;
	cout << "Please enter a number= ";
	int num1;
	cin >> num1;
	cout << "Please enter 2nd number= ";
	int num2;
	cin >> num2;
	cout << DigNum(dig, num1) << endl;
	cout << NumNum(num1, num2) << endl;
	system("PAUSE");
	return 0;
}