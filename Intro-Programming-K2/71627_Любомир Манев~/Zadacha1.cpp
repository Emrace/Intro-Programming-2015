#include <iostream>
#include <cstring>
using namespace std;
int sraritmetichno(char a[],int length){
	int counter = 0;
	int sum = 0;
	bool posledovatelnost = true;

	for (int i = 0; i < length-1; i++){
		posledovatelnost = true;
		if (a[i] > a[i + 1]){
			sum++;
		} else {
			posledovatelnost = false;
			counter++;
		}

		}

	return sum/counter;
	
}

int main(){
	char a[100];
	cin >> a;
	int len = strlen(a);
	double value;
	value = sraritmetichno(a, len);
	// cout << value;
	system("pause");
	return 0;
}