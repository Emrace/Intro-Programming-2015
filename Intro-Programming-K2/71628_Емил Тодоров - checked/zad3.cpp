#include <iostream>
using namespace std;
bool isValid(char* c, int size)
{
	bool flag;
	for (int i = 0; i <= size; i++)
	{
		if ((c[i] != '+') || (c[i] != '-') || (c[i] != '/') || (c[i] != '*') || ((c[i] <= '0') && (c[i] >= '9')))
		{
			//digit check fails
			//&& should be used
			flag = false;
		}
		else if ((c[0] == '+') || (c[0] == '-') || (c[0] == '/') || (c[0] == '*'))
		{
			flag = false;
		}
		else if ((c[strlen(c)] == '+') || (c[strlen(c)] == '-') || (c[strlen(c)] == '*') || (c[strlen(c)] == '/'))
		{
			flag = false;
		}
		else if ((c[i - 1] == c[i] && c[i] == '+') || (c[i - 1] == c[i] && c[i] == '-') || (c[i - 1] == c[i] && c[i] == '/') || (c[i - 1] == c[i] && c[i] == '*'))
		{
			//index out of range again
			return false;
		}
		else flag = true;
		//return should be outside the loop
		return flag;
	}
}
int main() {
	char arr[] = "1 * 2 + 4";
	cout << isValid(arr, 50);


	system("pause");
	return 0;
}

// 0.0/0.0
