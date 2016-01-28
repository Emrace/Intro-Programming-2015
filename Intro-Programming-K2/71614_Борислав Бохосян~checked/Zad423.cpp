#include<iostream>

using namespace std;

bool f(int* array,int inputNumber,int inputDigit,bool flag)
{
	bool flag1=false;
	int i = 0;
	if (inputNumber == 0){
		return flag1;
	}
	else{
		if (inputDigit == inputNumber % 10){
			flag1 = true;
		}
		f(array,inputNumber / 10,inputDigit,flag);
		return flag1; 
	}
}

int main()
{
	int array[100];
	int inputNumber;
	int inputDigit;
	bool flag1;
	bool flag=false;
	cin >> inputNumber >> inputDigit;
	flag1 = f(array,inputNumber,inputDigit,flag);
	cout << flag1;


	system("pause");
	return 0;
}