#include<iostream>
#include<string>
using namespace std;

int  charFunc(char ch[], double len){

	int count = 0, sum =1;
	bool  row = true;

	for (int i = 0; i < len; i++){
		if (ch[i]< ch[i+1]){
			sum++;
		}
		else{
			row = false;
			count++;
		}
	}

	return sum / count;
}
int main(){

	char ch[100];
	cin >> ch;

	double func;
	double len = strlen(ch);

	func = charFunc(ch,len);
	cout << func << endl;

	system("PAUSE");
	return 0;
}

//0.5/1.5