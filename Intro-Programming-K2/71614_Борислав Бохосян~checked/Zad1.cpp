#include<iostream>

using namespace std;

double f(char* arrayChar,int* arrayInt)
{
	int br = 1, helpArrayInt = 0, br2 = 0;
	for (int i = 0; i < strlen(arrayChar); i++)
	{
		if ((int)(arrayChar[i] + 1) == (int)arrayChar[i + 1]){
			br++;
		}
		else{
			arrayInt[helpArrayInt] = br;
			br = 1;
			helpArrayInt++;
		}
	}
	for (int i = 0; i < helpArrayInt; i++)
	{
		br2 += arrayInt[i];
	}
	double br3 = br2;
	double helpArrayInt2 = helpArrayInt;
	return br3 / helpArrayInt2;
}

int main()
{
	char arrayChar[100];
	int arrayInt[100];
	cin >> arrayChar;
	cout << f(arrayChar,arrayInt);

	system("pause");
	return 0;
}