#include<iostream>
#include<cmath>

using namespace std;

int numberTwo(int n);
bool isPrime(int n);

int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0){
		cout << numberTwo(n);
	}
	else if (isPrime(n) == true){
		for (int i = n-2; i > 0; i-=2)
		{
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}
int numberTwo(int n)
{
	int i;
	for (i = 0; i < n/2+1; i++)
	{
		if (n % 2 != 0){
			break;
		}
		n /= 2;
	}
	return i;
}
bool isPrime(int n)
{
	bool isPrimeV2 = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0){
			isPrimeV2 = false;
		}
	}
	return isPrimeV2;
}