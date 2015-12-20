#include<iostream>
using namespace std;
int main()
{
	int arr[10][10],sum=0;
	int R, BombX, BombY;
	cout << "radius:";
		cin >> R;
		cout << "BombX:";
		cin >> BombX;
		cout << "BombY:";
		cin >> BombY;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
				arr[i][j] = i * 10 + j;
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 10; j++)
				if (pow(BombX - i, 2) + pow(BombY - j, 2)>R*R)
					sum += arr[i][j];
		cout << sum;
		system("PAUSE");
		return 0;
}