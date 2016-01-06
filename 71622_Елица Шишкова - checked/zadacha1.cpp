#include <iostream>
#include <cmath>
using namespace std;

double number(int num)
{
	//need some explaining
	if ((num >= 7) && (num <= 39))
		return 1;
	int num1 = pow(num, 1 / 3);
	

	if (!(num1 == 0))
	{
		for (int i = 0; i <= num1; i++)
		{
			double sum = 0;
			sum += i;
		}
	}
	for (int j = 2; j < num; j++)
	{
		if (num %j == 0)
		{
			for (int k = 1; k <= num; k++)
			{

			}
		}
	}
	return num; 
}
int main()
{
	int numOf;
	cin >> numOf;
	cout << number(numOf);
		system("Pause");
		return 0;
}