#include<iostream>
using namespace std;
int main()
{
	int n, arr[20];
	cout << " n=";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i <n; i++)
		cout << (n-i)*arr[i]<<" ";
	system("PAUSE");
	return 0;
}