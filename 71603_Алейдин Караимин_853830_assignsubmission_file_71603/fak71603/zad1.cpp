#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) //Funkciata raboti samo za konkretnata zadacha
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n % 2 == 0)
			return false;
	return true;
}

int EvenOperation(int n)
{
	int power = 0;
	while (n % 2 == 0)
	{
		power++;
		n /= 2;
	}
	return power;
}

int OddSum(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i += 2)
		sum += i;
	return sum;
}

int main()
{
	int number;
	do
	{
		cout << "number = ";
		cin >> number;

	} while (number < 5 && number > 43);

	if (number % 2 == 0)
		cout << "Stepenta na dvoikite e: " << EvenOperation(number);

	if (isPrime(number))
	{
		cout << "sum - nechetni na prosto chislo: " << OddSum(number);
	}

	system("PAUSE");
	return 0;
}