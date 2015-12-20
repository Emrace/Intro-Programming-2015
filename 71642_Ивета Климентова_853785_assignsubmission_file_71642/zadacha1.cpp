#include <iostream>
#include <cmath>
using namespace std;
bool Kub(double);
bool Prosto(int);
int Tri(int);
int Fibo(int)

int main()
{
	double x;
	int y;
	cin >> x;
	if (Kub(x) == true)
	{
		y = cbrt(x);
		cout << Tri(y) << endl;
		if (Prosto(y == true))
			cout << Fibo(y);
	}

	system("pause");
	return 0;

}
bool Kub(double a)
{
	double d = cbrt(a);
	if (d == ceil(d))
		return true;
	else
		return false;
}
int Tri(int b)
{
	int S = 0;
	for (int i = 1; i <= b; i++)
		S += i;
	return S;
}
bool Prosto(int c)
{
	int d = 0;
	for (int i = 2; i <= c / 2; i++)
		if (c%i == 0)
			d = 1;
	if (d == 0)
		return true;
	if (d != 0)
		return false;
}
int Fibo(int x)
{
	if (x <= 1)
		return 1;
	return Fibo(x - 1) + Fibo(x - 2);
}