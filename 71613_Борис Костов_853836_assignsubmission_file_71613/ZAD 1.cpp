#include <iostream>
using namespace std;

void Number(double number)
{
	cin >> number;
	if (number < 7 || number > 39)
		cout << "try again." << endl;
}

bool isPrime(int number)
{
	bool isPrime = true;
	if (number <= 1 && isPrime)
		isPrime = false;
	
	for (int i = 0; i*i < number && isPrime; i++)
		if (number % i == 0)
			isPrime = false;

	return (isPrime ? "Prime" : "Not prime");
}

bool root3(int number)
{
	bool root3 = true;


}

int Fibonacci(int number)
{


}

int main()
{
	int number, sum = 0;
	Number();
	if (root3)
	{
		for (int k = 1; k <= number; k++)
			sum += k;
		cout << sum << endl;
	}

	if (isPrime)
	{
		cout << Fibonacci() << endl;
	}

	system("PAUSE");
	return 0;
}

