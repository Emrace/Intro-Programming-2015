#include <iostream>
using namespace std;

int vutre(int num, int dig){
	if (num == dig){
		return true;
	}
	if (num % 10 == dig){
		return true;
		return vutre(num / 10, dig);
	}
	return false;
	
}
int vutredve(int numn, int numm){
	if (numn < 10){
		return false;
	}
	if (numn == numm % 100){
		return true;
	}
	else return vutredve(numn, numm / 10);
}
int main(){
	int a, b, c, d;
	cout << "vuvedi chislo , cifra , chislo i chislo";
	cin >> a, b, c, d;
	cout << vutre(a, b);
	cout << vutredve(c, d);

	system("pause");
	return 0;
}