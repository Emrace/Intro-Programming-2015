#include<iostream>
using namespace std;
bool isprime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a%i == 0)
		{
			return false;
		}
	}
	return true;
	//0.5
}
bool to4enkub(double a)
{
	double qrt = pow(a, (double)1 / 3);
	int ost = qrt; 
	if (qrt == ost) //why?
		return true;
	else
		return false;
	//0.2 ??
}
int triugulnasuma(double a)
{
	int s = 0;
	for (int i = 0; i <= a; i++)
	{
		s += i;
	}
	return s;
	//0.5
}
void fibona4i(int a)
{
	int lastindex1 = 1;
	int lastindex2 = 1;
	int fib[100];
	fib[0] = 1;
	fib[1] = 1;
	//you don't need to ask for the first two elements
	cout << fib[0] << " " << fib[1] << " ";
	for (int i = 2; i <= a; i++)
	{
		fib[i] = lastindex1 + lastindex2;
		lastindex1 = lastindex2;
		lastindex2 = fib[i];
		cout << fib[i] << " ";
	}

	//0.5

}
int main()
{
	double n;
	do
	{
		cout << "n = ";
		cin >> n;
		if (n < 7 || n>39)
		{
			cout << endl << "Enter a number between 7 and 39" << endl;
		}
	} while (n < 7 || n>39);
	if (to4enkub(n)){
		cout << n << " e to4en kub. s = " << triugulnasuma(n) << endl;
	}
	else
		cout << n << " ne e to4en kub" << endl;
	if (isprime(n))
	{
		cout << n << " is a prime number" << endl;

	}

	else{
		cout << n << " is not a prime number" << endl;
		//this should be in the if statement - -0.1
		fibona4i(n);
	}
	cout << endl;
	system("pause");
	return 0;
}

//1.6\2.0