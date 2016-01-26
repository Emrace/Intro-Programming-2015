#include <iostream>
#include <cstring>
using namespace std;
int isvalid(char *izraz, int length){
	char last;
	int flag;
	// validaciq za nevalidni simvoli
	for (int i = 0; i < length - 1; i++ ){
		if (izraz[i]>'A' || izraz[i] < '&'){
			flag = 0;
			return flag;
		}
	}//krai
	// bonus ( , )
	int skobilqvo = 0;
	int skobidqsno = 0;
	bool skobi = false;
	for (int i = 0; i < length - 1; i++){
		if (izraz[i] == '('){
			skobilqvo++;
		}
		else if (izraz[i] == ')'){
			skobidqsno++;
		}
	}
	if (skobilqvo == skobidqsno){
		for (int i = 0; i < length - 1; i++){
			if (izraz[i] == '(' || izraz[i] == ')'){
				if (( izraz [i + 1] >= '0' && izraz[i + 1] <= '9') || (izraz[i - 1] >= '0' && izraz[i - 1] <= '9')){
					skobi = true;
				}
				else{
					skobi = false;
					return skobi;
				}
			}

		}
	}





	for (int i = 1; i < length ; i++){
		last = izraz[i - 1];
		if ((int(last) == '*' || last == '-' || last == '+' || last == '/') && ((int(izraz[i]) < '0') && (int(izraz[i]) >'9'))){
			flag = 0;
			return flag;
		}
	}
	flag = 1;
	return flag;
}



int main(){
	char izraz[100];
	cin >> izraz;
	int length = strlen(izraz);
	cout << isvalid(izraz, length);
	system("pause");
	return 0;
}