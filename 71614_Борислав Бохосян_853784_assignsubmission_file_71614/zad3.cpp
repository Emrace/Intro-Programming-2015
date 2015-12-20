#include<iostream>

using namespace std;

int main()
{
	int n, arr[100];
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cin >> arr[i];
	}
	//for (int i = n, j = 0; i > 0; i--, j++)
	//{
		//cout << i*arr[j] << "x^"<<i-1;
	//}
	cout << n*arr[0] << "x^" << n - 1;
	for (int i = n-1, j = 1; i > 2; i--, j++)
	{
		if (arr[j] < 0){
			cout << i*arr[j] << "x^" << i - 1;
		}
		else if (arr[j] > 0){
			cout <<"+"<< i*arr[j] << "x^" << i - 1;
		}
	}
	if (arr[n - 2] > 0){
		cout << "+" << 2 * arr[n - 2] << "x";
	}
	else if (arr[n - 2] < 0){
		cout <<2 * arr[n - 2] << "x";
	}
	cout << arr[n - 1];

	system("pause");
	return 0;
}