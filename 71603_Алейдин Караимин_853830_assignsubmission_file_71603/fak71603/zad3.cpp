#include<iostream>
#include<cmath>
using namespace std;

void DoMagic(int n, int arr[100])
{
	int NewCoef[100];
		for (int i = 0; i < n; i++)
		{
			NewCoef[i] = arr[i] * (n - i);
			cout << NewCoef[i]<<" ";
		}
}

void BonusMagic(int n, int arr[100])
{
	int NewCoef[100];
	for (int i = 0; i < n; i++)
	{
		NewCoef[i] = arr[i] * (n - i);

		if (i > 0 && i != n-1)
		{
			if (NewCoef[i] > 0)
				cout << "+";
		}

		if (i != n - 1)
		{
			if (NewCoef[i] != 1 && NewCoef[i] != -1)

				cout << NewCoef[i] << "x";
			else if (NewCoef[i] == 1 || NewCoef[i] == -1)
				cout << "x";
			if ((n - i - 1) != 0)
			{
				if (i == 0)
				{
					cout << "^";
					cout << n - i - 1;
				}
			}

		}
		else
		{
			if (NewCoef[i] > 0)
				cout << "+";
			else
				cout << "-";
			cout << NewCoef[i];
		}
	}
}

int main()
{
	int n, A[100];

	cout << "n=";
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> A[i];

	DoMagic(n, A);
	cout << endl;
	BonusMagic(n, A);

	system("PAUSE");
	return 0;
}