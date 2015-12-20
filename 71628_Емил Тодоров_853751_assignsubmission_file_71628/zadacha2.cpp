/*#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int sum = 0;
	int x0, y0;
	cin >> x0 >> y0;
	int r;
	cin >> r;
	int arr[10][10];
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			arr[i][j] = i * 10 + j;
	for (int k = 0; k < 10; k++)
	{
		for (int f = 0; f < 10; f++)
		{
			if (pow(x0 - k, 2) + pow(y0 - f, 2) <= r)
			{
				sum += arr[k][f];
			}
		}
	}
	cout << sum;
	system("pause");
	return 0;
}
*/