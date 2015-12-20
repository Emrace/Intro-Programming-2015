#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	int arr[10][10];
	int x0, y0, r;
	cin >> x0;
	cin >> y0;
	cin >> r;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			arr[i][j] = i * 10 + j;
		}

	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((x0 - i)*(x0 - i) + (y0 + j)*(y0 + j) <= r*r)
				sum += arr[i][j];
		}
		cout << sum; 
		system("Pause");
			return 0; 
}