#include <iostream>
using namespace std;

int Chetno(int n)
{
	if (n % 2 == 0){
		cout << "Chisloto e chetno " << endl;
	}
	else {
		cout << "Chisloto ne e prosto " << endl;
	}
}
bool isPrime(int p)
{
	if (p == 1)
		return false;
	if (p == 2)
		return true;
	if (p % 2 == 0)
		return false;

}


int main()
{
	int number;
	cout << "Vuvedi chislo: " << endl;
	cin >> number;
	if ((number < 5) || (number > 43))
	{
		cout << "Vuvedi stoinost v intervala [5, 43]: " << endl;
	}
	if (number % 2 == 0){
		cout << Chetno(number);
	}
	else if (isPrime(number) == true){
		int sum += number;
	}
	{
		for (int i = number - 2; i > 0; i -= 2){
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}