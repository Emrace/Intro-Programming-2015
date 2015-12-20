#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[10][10];
	for (int i=0; i < 10; i++)
		for (int j=0; j < 10; j++)
		{
			a[i][j] = i * 10 + j;

		}
	int x0, y0, r;
	int sum = 0;
	cout << "vuvedete x0 =";
	cin >> x0;
	cout << "vuvedete y0 =";
	cin >> y0;
	cout << "vuvedete r =";
	cin >> r;
	int i, j;
		for (i = 0; i < 10; i++)
			for (j = 0; j < 10; j++)

				if ((x0 - i)*(x0 - i) + (y0 - j)*(y0 - j) >= (r*r))
				{
					sum += a[i][j];
					cout << sum << endl;
				}
	system("PAUSE");
	return 0;
}