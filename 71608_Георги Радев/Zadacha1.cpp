#include<iostream>
#include<cmath>
using namespace std;

bool Simple(int n)
{
	bool simple = true;
	for (int i = 0; i <= sqrt(n); i++)
		if (n % 2 == 0)
			return false;
	return true;
}

int TochenKub(int n)
{
	for (int i = 1; i <= n; i++)
		if (pow(i, 3) == n)
			return true;
	return false;
}

int Fibonacci(int n)
{
	int first = 0;
	int second = 1;
	int next;
	for (int i = 0; i <= n;i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
	}
	return next;
}

int Suma(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; i++)
		sum = sum + i;
	return sum;
}

int main()
{
	int n;
	cout << "Vuvedete chislo ot klaviaturata:" << endl;
	cout << "n=";
	cin >> n;
	if (n >= 7 && n <= 39)
	{
		if (Simple(n))
			cout << Fibonacci(n);

		if (TochenKub(n))
			cout << Suma(n);
	}
	else
		cout << "Nekorektni danni" << endl;
	system("PAUSE");
	return 0;
}