#include <iostream>
using namespace std;
int main(){
	int n, koeficienti[20], temp, stoinosti[20], counter;
	cout << "vuvedete nai-visokata stepen na x" << endl;
	cin >> n;
	counter = n;
	temp = n;
	for (int i = 0; i <= n; i++){
		if (counter != 0){
			cout << "vuvedete koeficienta pred " << counter << "stepen na x" << endl;
		}
		else{
			cout << "vuvedete koeficienta pred svobodniq chlen na x" << endl;
		}
		cin >> koeficienti[i];
		stoinosti[i] = koeficienti[i] * counter;
		counter--;
	}
	for (int i = 0; i < n; i++){
		if ((temp > 0) && (stoinosti[i] >= 0) && (temp!=n)){
			cout << " + ";
		}
		temp--;
		if (temp != 1 && temp!=0){
		cout << stoinosti[i] << "x^" << temp;
		}
		else if (temp == 1){
			cout << stoinosti[i] << "x";
		}
		else if (temp == 0){
			cout << stoinosti[i];
		}
		cout << " ";
		
	}
	system("pause");
	return 0;
}