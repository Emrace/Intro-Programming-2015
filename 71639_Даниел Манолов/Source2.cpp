#include <iostream>
#include <cmath>
using namespace std;
bool bombradius(int x0, int y0, int i, int j, int r){
	return pow((x0 - i), 2) + pow((y0 + j), 2) <= pow((r), 2);
}

int main(){
	int x1, y1, r;
	cout << "Vuvedi x1: ";
	cin >> x1;
	cout << "Vuvedi y1: ";
	cin >> y1;
	cout << "Vuvedi r: ";
	cin >> r;
	int arr[10][10];
	int sum = 0;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			arr[i][j] = i * 10 + j;

			if (bombradius(x1, y1, i, j, r))
				sum = sum + arr[i][j];
		}
	}
	cout << sum;

	system("pause");
	return 0;
}