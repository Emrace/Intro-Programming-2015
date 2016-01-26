#include <iostream> // zadacha1
using namespace std;
double srednoAritmetichno(char *c, int *arr )
{
	int br = 1;
	int help = 0;
	int br2 = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if ((int)(c[i] + 1) == (int)(c[i+1]))
		{
			br++;
		}
		else
		{
			arr[help] = br;
			br = 1;
			help++;
		}
	}
	for (int i = 0; i < help; i++)
	{
		br2 += arr[i];
	}
	double br3 = br2;
	double help2 = help;
	return br3 / help2;
}

int main()
{
	char c[100];
	int arr[100];
	cin >> c;
	cout << srednoAritmetichno(c,arr) << endl;
		system("pause");
	return 0;
}

