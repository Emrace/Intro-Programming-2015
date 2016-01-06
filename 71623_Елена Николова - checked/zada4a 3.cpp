#include<iostream>
using namespace std;
void insert(int a[20],int n)
{
	for (int i = n; i >=0; i--)
	{

		cin >> a[i];
	}

}
int main()
{
	int n;
	cout << "Vavedete nai-visokata stepen  = ";
	cin >> n;
	int a[20];
	cout << "Vavedete koeficientite na uravnenieto : ";
	insert(a, n);
	int x;
	for (int i = n; i>=0; i--)
	{
			x = i*a[i];
			cout << x<<"\n";
		}

	system("pause");
	return 0;
//1.0\1.0
}