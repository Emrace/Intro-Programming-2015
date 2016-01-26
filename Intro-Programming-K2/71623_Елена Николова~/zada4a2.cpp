#include<iostream>
using namespace std;
bool exist(int number, int snumber)
{
	if (number % 10 == snumber)
		return true;
	if (number == 0)
		return false;
	else return exist(number / 10, snumber);
}
int main()
{
	int number;
	cin >> number;
	int snumber;
	cin >> snumber;
	cout << boolalpha << exist(number, snumber);
	system("pause");
	return 0;

}