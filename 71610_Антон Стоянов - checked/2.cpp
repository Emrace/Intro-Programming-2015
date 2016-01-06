#include<iostream>
using namespace std;
int main()
{
	int a[10][10] = {
			{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
			, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }
			, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
			, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }
			, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
			, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }
			, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
			, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }
			, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
			, { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }
	};
	int x0, y0, r;
	cout << "x0 = ";
	cin >> x0;
	cout << endl << "y0 = ";
	cin >> y0;
	cout << endl << "r = ";
	cin >> r;
	int s = 0;
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			cout << a[y][x] << " ";
		}
		cout << endl;
	}
	cout << endl << "  x   y  a[x][y]" << endl;
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (((x0 - x)*(x0 - x) + (y0 - y)*(y0 - y)) <= r)
			{
				s += a[x][y];
				cout << "a[" << x << "] [" << y << "] = " << a[y][x] << endl;
			}
		}
	}
	cout << "s = " << s << endl;
	system("pause");
	return 0;

	//1.0\1.0
}