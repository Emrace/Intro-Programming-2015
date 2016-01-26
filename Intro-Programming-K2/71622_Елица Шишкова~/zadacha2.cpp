/*#include <iostream>
using namespace std;

bool number(int bigNumber, int inclNumber)
{
	if (bigNumber % 10 == 0) return true;
	if (inclNumber == bigNumber % 10) return true;
	else return false;
	return number(bigNumber % 10, inclNumber);

}
int main()
{
	int num, smallNum;
	cout << "Vuvedete chislo:";
	cin >> num;
	cout << "Vuvedete cifra";
	cin >> smallNum;
	cout << boolalpha <<  number(num, smallNum);
	system("Pause");
	return 0;
	
}*/