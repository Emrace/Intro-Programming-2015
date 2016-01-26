#include <iostream>
using namespace std;

double srednoar(char *arr, int *arr1){
	int count = 1, counter = 0;
	int br = 0;
	for (int i = 1; i < strlen(arr); i++)
	{
		if ((int)(arr[i] + 1) == (int)arr[i + 1])
		{
			count++;
		}
		else{
			arr1[br] = count;
			count = 1;
			br++;
		}
	}
	for (int i = 0; i < br; i++){
		counter = arr1[br];
	}
	return counter / br;
}
int main(){
	char array[] = " abcfgegfe";
	int array1[100];
	cout << (double)srednoar(array, array1) << endl;
	system("pause");
	return 0;
}