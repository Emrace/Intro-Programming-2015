#include<iostream>
using namespace std;
int pr_chislo(int num)
{
	if ((num >= 7) && (num <= 39))
	{

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
	if (pow(num, 1 / 3) == k)
	{
		for (int i = 0; i <= num; i++)
		{
			sum += i;
		}
	}
	return sum;

}


int main()
{
	int n, s=0;
	cout << "n= ";
	cin >> n;
	pr_chislo(n);
	triug_chisla(s);



	system("pause");
	return 0;
}