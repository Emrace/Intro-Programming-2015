#include<iostream>
using namespace std;
int pr_chislo(int num)
{
	if ((num >= 7) && (num <= 39))
	{
		//got the idea, almost right for the task at hand - +0.3
		if (((num%num == 0) && (num % 1 == 0)) && ((num % 2 == 0) || (num % 3 == 0) || (num % 5 == 0) || (num % 7 == 0)))
			return true;
		else 
			return false;
	} 
	else
	{
		cout << "Error. " << endl;
	}
}
int triug_chisla(int num)
{
	int k, sum=0;
	//k is not initialized
	if (pow(num, 1 / 3) == k)
	{
		for (int i = 0; i <= num; i++)
		{
			sum += i;
		}
	}
	return sum;

}
// no fibonacci function: -0.5

int main()
{
	//functions are not called properly: -0.5
	int n, s=0;
	cout << "n= ";
	cin >> n;
	pr_chislo(n);
	triug_chisla(s);



	system("pause");
	return 0;
}

// 0.5\2.0
