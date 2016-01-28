#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double sredarit(char redica[])
{
	double count = 1;
	int br = 1;
	double suma = 0;
	for (int i = 0; i < strlen(redica) - 1; i++)
	{
		if (redica[i] + 1 == redica[i+1])
			br++;
		else
		{
			suma += br;
			br = 1;
			count ++;
		}
	}
	return (suma+br) / count;
}

char toUpperLetter(char letter)
{
	char result = letter;
	if (letter >= 'a' && letter <= 'z')
		result += 'A' - 'a';
	return result;

}

int main()
{
	char arr[100];

	cin.getline(arr, 99);
	cout << sredarit(arr) << endl;

	system("PAUSE");
	return 0;
}