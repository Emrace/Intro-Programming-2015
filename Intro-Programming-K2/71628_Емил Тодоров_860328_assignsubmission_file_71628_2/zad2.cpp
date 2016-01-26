 #include <iostream>
using namespace std;
bool checkDigit(int number, int digit)
{
	if (number == 0)
		return 0;
	if (number % 10 == digit)
		return true;
	return check(number / 10, digit);

}

int main(){
	cout << checkDigit(1234, 4) << endl;

	system("pause");
	return 0;

} 
