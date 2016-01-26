#include <iostream>
using namespace std;
double average(char *a, int n)
{
    int sum = 0;
	int br = 0;
	for (int i = 0; i < n; i++)
	{

		if (a[i + 1] > a[i] && (a[i]+1== a[i+1]))
			
		{
			
	    br++;
		sum += br;

		}
		
	}
	return strlen(a) / br;
}

int main()
{
	char a[100];
	cout << "Niz";
	int n = strlen(a);
	cin >> a;
	cout << average(a,n);
	system("Pause");
	return 0; 
}