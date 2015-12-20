#include <iostream>
using namespace std;
int main()
{
	int deg,array[20];
	int a;
	cout << "Type the degree of x: ";
	cin >> deg;
	cout << "Type a1, ..., an: " << endl;
	for (int n = 1 n <= deg + 2;n++)
	{
		cout << "a" << n << " = " << endl;
		cin >> array[n];
	}
	
	cout << "f'(x) = "; 
	for (int i = deg, m = 0; i > 0; i--, m++)
	{
		cout << i*array[m] << "x^" << (deg-1) << " ";
	}

	system("PAUSE");
	return 0;
}