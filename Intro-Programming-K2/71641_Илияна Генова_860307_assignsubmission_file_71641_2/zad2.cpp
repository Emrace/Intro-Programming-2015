#include <iostream>
using namespace std;
int digitNumber(int number, int digit)
{
	if (number == 0)
	{
		return 0;
	}
		
	 if (number == digit)
		{
			return 1;
		}
		
	 if (digit==number%10)

		{
		return 1;
		}
	else return digitNumber(number / 10, digit);
	
	}
	

int main()
{
	int n, d;
cin >> n;
cin >> d;
cout << digitNumber(n, d) << endl;
system("pause");
return 0;
}
