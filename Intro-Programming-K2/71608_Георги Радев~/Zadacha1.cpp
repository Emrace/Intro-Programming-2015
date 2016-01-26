#include<iostream>
#include<cstring>
using namespace std;

double function(char arr[], double length)
{
	double counter = 0;
	int sum = 1;
	bool row = true;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			sum++;
		}
		else
		{
			row = false;
			counter++;
		}
	}
	return sum / counter;
}

int main()
{
	char A[100];
	cin >> A;
	double exit;
	double length = strlen(A);
	exit = function(A, length);
	cout << exit << endl;
	system("PAUSE");
	return 0;
}