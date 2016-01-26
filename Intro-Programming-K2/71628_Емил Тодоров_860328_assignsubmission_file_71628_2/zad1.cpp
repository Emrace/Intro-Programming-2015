 #include <iostream>
using namespace std;

double approx(char* arr1, int* arr2)
{
	int counter = 1, counter2 = 0;
	int helper = 0;
	for (int i = 0; i < strlen(arr1); i++)
	{
		if ((int)(arr1[i - 1] - 1) == (int)arr1[i])
		{
			counter++;
		}
		else
		{
			arr2[helper] = counter;
			counter = 1;
			helper++;
		}
	}
	for (int i = 0; i < helper; i++)
	{
		counter2 += arr2[helper];
	}
	return counter2 / helper;
}

int main() {
	char asd[] = "cbagfqgfe";
	int arr[100];
	cout << approx(asd, arr) << endl;


	system("pause");
	return 0;
} 