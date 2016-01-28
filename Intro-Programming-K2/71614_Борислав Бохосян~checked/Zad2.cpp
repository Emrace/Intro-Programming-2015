#include<iostream>

using namespace std;

bool isValid(char* inputArray)
{
	bool flag=true;
	for (int i = 0; i < strlen(inputArray); i++)
	{
		if ((inputArray[i] != '+') && (inputArray[i] != '-') && (inputArray[i] != '*') && (inputArray[i] != '/') && (inputArray[i] != '0') && (inputArray[i] != '1') && (inputArray[i] != '2') && (inputArray[i] != '3') && (inputArray[i] != '4') && (inputArray[i] != '5') && (inputArray[i] != '6') && (inputArray[i] != '7') && (inputArray[i] != '8') && (inputArray[i] != '9') && (inputArray[i] != ' ')){
			flag = false;
		}
		else if ((inputArray[0] == '+') || (inputArray[0] == '-') || (inputArray[0] == '*') || (inputArray[0] == '/')){
			flag = false;
		}
		else if ((inputArray[strlen(inputArray) - 1] == '+') || (inputArray[strlen(inputArray) - 1] == '-') || (inputArray[strlen(inputArray) - 1] == '*') || (inputArray[strlen(inputArray) - 1] == '/')){
			flag = false;
		}
		
	}
	if (true){
		for (int p = 0; p < strlen(inputArray) - 2; p++)
		{
			if (((inputArray[p] == '+') || (inputArray[p] == '-') || (inputArray[p] == '*') || (inputArray[p] == '/')) && ((inputArray[p + 1] == '+') || (inputArray[p + 1] == '-') || (inputArray[p + 1] == '*') || (inputArray[p + 1] == '/'))){
				flag = false;
			}
		}
	}
	if (true){
		for (int q = 0; q < strlen(inputArray) - 2; q++)
		{
			if (((inputArray[q] == '0') || (inputArray[q] == '1') || (inputArray[q] == '2') || (inputArray[q] == '3') || (inputArray[q] == '4') || (inputArray[q] == '5') || (inputArray[q] == '6') || (inputArray[q] == '7') || (inputArray[q] == '8') || (inputArray[q] == '9')) && ((inputArray[q + 1] == ' '))){
				while (inputArray[q + 1] == ' '){
					q++;
				}
			}
			if ((inputArray[q + 2] >= '0') && (inputArray[q + 2] <= '9')){
				flag = false;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	char inputArray[100];
	cin >> inputArray;
	bool flag = false;
	flag = isValid(inputArray);
	cout << flag;

	system("pause");
	return 0;
}