#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int arr[10][10];

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			arr[i][j] = i * 10 + j;
	int x0, y0, r;
	int sum = 0;
	cout << "x0=";
	cin >> x0;
	cout << "y0=";
	cin >> y0;
	cout<< "r=";
	cin >> r;
	

	{ 	for (int i = 0; i <= 10; i++)
		for (int j = 0; j <= 10; j++)
		{
		if (pow((x0 - i),2) + pow((y0 - j),2) <= pow(r,2))
			sum = sum + arr[i][j];
		cout << sum << endl;
		}
	}

	system("PAUSE");
	return 0;
	
	





}