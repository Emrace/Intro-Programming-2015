#include <iostream>
using namespace std;
int main()
{
	int arr[10][10];
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			cin >> arr[i][j];

	int x0, y0;
	cout << "Type x0 and y0 : (x0,y0) = ";
	cin >> x0 >> y0;

	int radius;
	cout << "Type radius: ";
	cin >> radius;

	int sum;
	sum = 0;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if ((x0 - i)*(x0 - i) + (y0 - j)*(y0 - j) <= radius*radius)
				sum += arr[i][j];

	cout << "Sum of all these elements is: " << sum << endl;

	system("PAUSE");
	return 0;
}

