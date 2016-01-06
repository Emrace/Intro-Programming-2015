#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n % 2 == 0){
			return false;
		}
		return true;
	}
}
int EvenOperation(int n){
	int power = 0;
	while (n%2==0){
		power++;
		n /= 2;
	}
	return power;
}
int Sum(int n){
	int sum = 0;
	for (int i= 1; i<n; i+=2){
		sum += i;
	}
	return sum;
}
int main(){
	int number;
	do{
		cin >> number;
	} while (number < 5 && number >43);
		if (number % 2 == 0){
			cout << "strepenta na dvoikata e:" << EvenOperation(number) << endl;
		}
		if (prime(number)){
			cout << "sumata na nechetnite chilata:" << Sum(number) << endl;
		}
	system("pause");
	return 0;
	//cheater? 0.0\0.0
}