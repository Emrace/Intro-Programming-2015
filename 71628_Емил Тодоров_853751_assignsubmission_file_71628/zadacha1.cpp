/*#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int number){
	int copy=1;
	for (int i = 2; i <= number; i++)
	{
		if (number%i!=0)
		{
			copy = number;
		}
	}
	if (copy == number)
	{
		return 1;
	}
	else return 0;
}

int fib(int number)
{
	int f = 1;
	int i = 1;
	int j = 2;
		for (int k = 2; i < number; k++)
		{
			f = i + j;
			i = j;
			j = f;
		}
	return f;
}


int main() {
	int n;
	do {
		cin >> n;
	} while (n < 7 && n>39);
	if (isPrime(n)){
		cout << fib(n);
	}
	else cout << "Chisloto ne e prosto";







	system("pause");
	return 0;
} 
*/
