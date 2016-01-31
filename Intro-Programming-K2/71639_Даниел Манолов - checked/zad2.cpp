#include <iostream>
using namespace std;

//no proper bottom, works only partially
int vutre(int num, int dig){
	if (num == dig){
		return true;
	}
	if (num % 10 == dig){
		return true;
		return vutre(num / 10, dig);//unreachable code
	}
	return false;
	
}

//no bottom for recursion
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
// 0.3/1.0