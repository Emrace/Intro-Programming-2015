#include <iostream>
using namespace std;
bool isDigit(int num, int digit)
{
	if (num >= 0 && num <= 9 && num == digit)
		return true;
	if (num >= 0 && num <= 9)
		return false;
	if (num % 10 == digit)
		return true;
	return isDigit(num / 10, digit);

}
int main()
{
	int number, digit;
	cin >> number >> digit;
	cout << isDigit(number, digit) << endl;
	system("pause");
	return 0;
}
