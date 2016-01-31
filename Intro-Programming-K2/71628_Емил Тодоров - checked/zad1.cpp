 #include <iostream>
using namespace std;

//function should take one argument
double approx(char* arr1, int* arr2)
{
	int counter = 1, counter2 = 0;
	int helper = 0;
	for (int i = 0; i < strlen(arr1); i++)
	{
		//i starts at 0 => i -1 is outside the array => doesn't count properly
		if ((int)(arr1[i - 1] - 1) == (int)arr1[i]) //no need to cast to int
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
	//string should be read from console
	char asd[] = "cbagfqgfe";
	int arr[100];
	cout << approx(asd, arr) << endl;


	system("pause");
	return 0;
	//0.5/1.5
} 