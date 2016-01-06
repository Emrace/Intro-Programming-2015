#include <iostream>
using namespace std;
int main()
{
	int arr[10][10];
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			arr[i][j] = i * 10 + j;
		}
	}

	int x, y; 
	int sum = 0;
	cout << "Vuvedi koordinati na tochkata, v koqto pada bombata: " << endl;
	cin >> x >> y;
	int r;
	cout << "Vuvedi radius na padnalata bomba po maluk ot 5: " << endl;
	cin >> r;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			//wrong condition - -0.5
			if ((x - i)*(x - i) + (y - i)*(y - j) <= r*r)
			{
				sum += arr[i][j];
			}
		}
	}
	cout << "Sumata na elementite izvun bombata e: " << sum << endl;

//0.5/1.0
	system("pause");
	return 0;
}