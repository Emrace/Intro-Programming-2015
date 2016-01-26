#include <iostream>

using namespace std;

int cont(int chislo, int cifra){
	bool flag = false;
	if (chislo <= 0){
		return flag;
	}
	if (chislo % 10 == cifra){
		flag = true;
		return flag;
	}
	else{
		return cont(chislo / 10, cifra);
	}
}
int main(){

	int chislo, cifra;
	bool exit;
	cin >> chislo >> cifra;
	exit = cont(chislo, cifra);
	if (exit == 1){
		cout << "Chisloto sydyrja cifrata" << endl;
	}
	else{
		cout << "Chisloto ne sydyrja cifrata" << endl;
	}
	system("PAUSE");
	return 0;
}