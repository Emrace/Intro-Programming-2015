#include <iostream>
using namespace std;
bool flag;
int chislofunction(int priem){
	int sum=0,counter=0;

	if (priem % 2 == 1){
		while (priem > 1){
			priem = priem - 2;
			sum += priem;	
		}
		flag = 1;
		return sum;
	}
	else {
		while (priem % 2 == 0){
			priem /= 2;
			counter++;
		}
		flag = 0;
		return counter;
	}


	
}

int main(){
	int chislo,suma;
	do{
		cout << "vuvedi chislo" << endl;
		cin >> chislo;
	} while (chislo < 5 || chislo > 43);
	suma = chislofunction(chislo);
	if (flag == 1){
		
		cout<<"sumata na prostite chisla e : " << suma<<" ";
	}
	if (flag == 0){

		cout << "stepenite na dvoikata sa : " << suma<< " ";
	}






	system("pause");
	return 0;
}