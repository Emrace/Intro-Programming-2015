#include<iostream>
#include<cstring>
using namespace std;
float func(char*a)
{
	float br = 0.0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= a[i + 1] && a[i]<a[i - 1])
			br++;
	}
	return ((float)strlen(a)) / br;
}


int main()
{
	char b[100];
	cout << "vuvedi izraz:";
	cin >> b;
	cout<<func(b) << endl;

	system("PAUSE");
	return 0;

}
