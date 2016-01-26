#include <iostream>
using namespace std;
int sudurja(int chislo,int cifra){
	bool flag = false;
	if (chislo <= 0){
		return flag;
	}
	if (chislo % 10 == cifra){
		flag = true;
		return flag;
	}
	else{
		return sudurja(chislo / 10, cifra);
	}

}
int bonus(){


}
int main(){
	int chislo, cifra;
	bool izhod;
	cin >> chislo >> cifra;
	izhod = sudurja(chislo, cifra);
	if (izhod == 1){
		cout << "true";
	}
	else if(izhod==0){
		cout << "false";
	}
cout<<endl;

	return 0;
}
