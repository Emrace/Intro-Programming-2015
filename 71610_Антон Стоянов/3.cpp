#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100];
	cout << "n = ";
	cin >> n;
	n++;
	cout << "f(x) = ";
	for (int i = n; i > 0; i--)
	{
		a[i] = i + 1;
		cout << a[i] - 1;
		if (i - 1 != 0)
			cout << "x^" << i - 1 << "+";
	}
	int b[100];
	cout << endl;
	cout << "f'(x) = ";
	for (int i = n - 1; i >= 1; i--)
	{
		b[i] = a[i] * (i);
		cout << b[i];
		if (i - 1 != 0)
			cout << "x^" << i - 1 << "+";
	}
	cout << endl;
	system("pause");
	return 0;
}