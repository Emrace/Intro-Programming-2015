#include<iostream>
using namespace std;
double average(char* a, int n)
{
	int br = 1;
	int h = 1;
	for (int i = 0; i <n-1; i++)
	{
		if (a[i]-1==a[i+1])
			br++;
		else h++;
	}
     
	return (double)strlen(a)/h;

}
int main()
{
	char a[100];
	cin >> a;
	int n=strlen(a);
	cout<<average(a, n);
	
    system("pause");
	return 0;
}
