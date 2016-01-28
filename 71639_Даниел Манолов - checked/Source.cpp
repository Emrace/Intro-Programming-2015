#include <iostream>
using namespace std;
bool simpleNumber(int number){
	int n = number;
	for (int i = 2; i < n; i++){
		if (n%i == 0) return 0;
	}
	return 1;
}

int main(){
	int num;
	cout << "Vuvedete chislo mejdu 5 i 43: ";
	cin >> num;
	if (num < 5 || num > 43){
		cout << "greshno chislo" << endl;
	}
	else{
		if (num % 2 == 0){
			int broqch = 0;
			for (int i = 2; num % 2 == 0;){
				num /= 2;
				broqch++;


			}
			cout << broqch << endl;
		}
		else if (simpleNumber(num)){
			int oddsum = 0;
			for (int i = 1; i < num; i += 2){

				oddsum += i;
			}
			cout << oddsum;

		}
	}
	system("pause");
	return 0;
}
