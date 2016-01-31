#include<iostream>
using namespace std;
bool func(int Number, int Digit)
{
	if (Number == 0)
		return false;
	if (Number % 10 == Digit)
		return true;
	else return func(Number / 10, Digit);

}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout <<boolalpha<< func(a, b) << endl;
	system("PAUSE");
	return 0;
}

// 1.0/1.0