#include <iostream>
using namespace std;
bool isValid(char* c, int size)
{
	bool flag;
	for (int i = 0; i <= size; i++)
	{
		if ((c[i] != '+') || (c[i] != '-') || (c[i] != '/') || (c[i] != '*') || ((c[i] <= '0') && (c[i] >= '9')))
		{
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
			return false;
		}
		else flag = true;
		return flag;
	}
}
int main() {
	char arr[] = "1 * 2 + 4";
	cout << isValid(arr, 50);


	system("pause");
	return 0;
}
