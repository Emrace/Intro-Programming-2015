#include<iostream>
using namespace std;
bool digitInNumber(int digit, int number)
{
	
	if (number == 0)
		return 0;

	if (number % 10 == digit)
		return true;

		return digitInNumber(digit, number/10);
	
}
bool numberInNumber(int num, int number)
{
	if (number == 0)
		return 0;
	if (number > num)
	{
		if (num == number % 100)
			return true;

		return numberInNumber(num, number / 100);
	}
	else if (number < num)
	{
		if (number % 100)
			return true;

		return numberInNumber(num / 100, number);
	}
	else return true;

}
int main()
{
	int num, dig;
	cout << "Number= ";
	cin >> num;
	cout << "Digit= ";
	cin >> dig;
	cout << digitInNumber(dig, num) << endl << endl;

	int x, y;
	cout << "Number1= ";
	cin >> x; 
	cout << "Number2= ";
	cin >> y;
	cout << numberInNumber(x, y) << endl;

	system("pause");
	return 0;
}