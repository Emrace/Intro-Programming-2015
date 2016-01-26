#include<iostream>
using namespace std;

int contain(int n, int m)
{
	bool flag = false;
	if (n <= 0)
		return flag;
	if (n % 10 == m)
	{
	flag = true;
	return flag;
	}
	else return contain(n / 10, m);
}
int main()
{
	int a, b;
	bool exit;
	cin >> a >> b;
	exit = contain(a, b);
	if (exit == 1)
		cout << "Chisloto sudurja cifrata"<<endl;
	else cout << "Chisloto ne sudurja cifrata" << endl;
	system("PAUSE");
	return 0;
}