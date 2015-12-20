#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int arr[10][10];
	for (int i=0;i<10;i++)
		for (int j = 0; j < 10; j++)
		{
		arr[i][j] = i * 10 + j;
		}
	int x0, y0, r;
	int sum = 0;
	cout << "Vuvedete danni za x0:" << endl;
	cin >> x0;
	cout << "Vuvedete danni za y0:" << endl;
	cin >> y0;
	cout << "Vuvedete danni za r:" << endl;
	cin >> r;
	for (int i = 0;i<10;i++)
		for (int j=0; i<10; i++)
			if ((x0 - i)*(x0 - i) + (y0 - i)*(y0 - i) >= (r*r))
			{
		sum = sum + arr[i][j];
		cout << sum << endl;
		system("PAUSE");
			return 0;

}