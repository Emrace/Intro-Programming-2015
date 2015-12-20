#include <iostream>
using namespace std;

int main(){
	int k;
	int n;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		cin >> k;
		k *= i;
		cout << "Kueficenta na 1vata prozivodna pred x na stepen " <<i << " e:" << k << endl;
		cout << "---------" << endl;

	}
	system("pause");
	return 0;


}