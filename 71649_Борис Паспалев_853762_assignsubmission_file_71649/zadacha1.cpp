#include<iostream>
using namespace std;
bool isPrime(int q)
{
	if (q % 2 == 0)
	{
		return false;
	}
	return true;
}
int functionPrime(int p)
{
	int sum = 1;
	
	for ( int i = 1; i < p;i++)
	{
		if (i % 2 != 0)
		{
			sum += i+2;
		}
	}
	return sum;
}
int function(int c)
{
	int br = 0;
	while (c % 2 == 0)
	{
		br++;
		c = c / 2;
	}
	return br;
}
int main()
{
	int n;
	cin >> n;
	if (n < 5 || n>43)
	{
		cout << "Error!";
	}
	
	if (isPrime(n))
	cout << functionPrime(n);
	else
		cout << function(n);

	system("PAUSE");
	return 0;
	
}