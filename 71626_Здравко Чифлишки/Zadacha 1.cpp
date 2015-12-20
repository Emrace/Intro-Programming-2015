#include<cmath>
#include<iostream>
using namespace std;
int isPrime(unsigned n)
{
	unsigned i = 2;
	if (n == 2) return 1;
	while (i <= sqrt(n))
	{
		if (n%i == 0) return 0;
		i++;
	}
	return 1;
}
int Kub(int n){
	for (int i = 1; i < n; i++)
		if (pow(i,3) == n)
			return true;
	return false;
}
int fib(int x){
	if (x == 1){
		return 1;
	}
	else {
		return fib(x - 1) + fib(x - 2);
	}
}
int Suma(int n){
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += n;
	return sum;
}
int main()
{
	int n;
	cout << "Vuvedete chislo mejdu [7,39]";
	cin >> n;
	if (isPrime(n))
		cout << fib(n) << endl;
	if (Kub(n))
		cout << Suma(n) << endl;
	system("pause");
	return 0;
}

