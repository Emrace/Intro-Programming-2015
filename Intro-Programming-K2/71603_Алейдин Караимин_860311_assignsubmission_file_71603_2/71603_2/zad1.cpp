#include<iostream>
#include<string>
using namespace std;

double DoIt(char str[])
{
	int count = 1, br = 1;
	double sum = 0;

	for (int i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] == str[i + 1] + 1)
			br++;
		else
		{
			sum += br;
			br = 1;
			count++;
		}
	}
	return (sum + br) / count;
}

int main()
{
	char str[101];

	cin.getline(str, 100);
	cout << DoIt(str);


	system("PAUSE");
	return 0;
}