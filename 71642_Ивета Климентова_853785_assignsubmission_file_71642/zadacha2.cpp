#include <iostream>
using namespace std;
int main()
{
	int arr[10][10];
	int x, y, r;
	int i, j;
	int sum = 0;
	cout << "vuvedete x:";
	cin >> x;
	cout << "vuvedete y:";
	cin >> y;
	cout << "vuvedere radius r:";
	cin >> r;
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			arr[i][j] = i * 10 + j;
			if ((x - i)*(x - i) + (y - j)*(y - j) <= r*r);
			sum = sum + arr[i][j];
		}
	}
	cout << "sumata e ravna na:" << sum << "\n";
	system("pause");
	return 0;