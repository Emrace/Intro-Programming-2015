/*#include<iostream>
using namespace std;
int isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0)
			return false;
		else return true;
	}
}
int chetno(int n)
{
	int br = 0;
	if (n % 2 == 0)
	{
		while (n % 2 == 0)
		{
			br++;
			n = n / 2;
		}

	}
	return br;
}
int main()
{
	int k;
	cout << "Enter k v interval [5,43] = ";
	cin >> k;
	if (k < 5 || k>43)
	{
		cout << "Error!!!";
		return 1;
	}
	int sum = 0;
	int z = isPrime(k);
	if (z == true)
	{
		for (int i = 1; i < k;i++)
			{
			if (!(i % 2 == 0))
				sum += i;
			}
		cout <<"Sumata na ne4etnite 4isla po-malki ot - ("<<k<<") e = "<< sum << "\n";
	}
	if (k % 2 == 0)
	{
		cout <<"Stepennta na 2, koqto se sadarja v 4isloto e = "<< chetno(k) << "\n";
	}

	system("pause");
	return 0;
}*/