/*#include<iostream>
using namespace std;
void insert(int a[10][10])
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			a[i][j] = i * 10 + j;
}
int sum(int a[10][10],int x,int y,int r)
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
		if (((x - i)*(x - i) + (y - j)*(y - j)) > r)
		{
			sum += a[i][j];
		}
		}
	return sum;
}
int main()
{
	int a[10][10];
	insert(a);
	int x0, y0, r;
	cout << "Vavedete koordinatite na centara na bombata  = "; 
	cin >> x0 >> y0;
	cout << "vavedete radiusa r = ";
	cin >> r;
	int s = sum(a, x0, y0, r);
	cout << "sumata na elementite izvan radiusa na bombata = " << s<<"\n";
	system("pause");
	return 0;
}*/