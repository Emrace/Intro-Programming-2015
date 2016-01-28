#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int arr[10][10],sum=0,sumbomba=0,x,y,r;
	cout << " vuvedi x , y , r";
	cin >> x >> y >> r;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			arr[i][j] = 10*i + j;
		}
	}
	for (int i = 0; i < 10; i++){
		cout << endl;
		for (int j = 0; j < 10; j++){
			cout << arr[i][j] << " ";
		}
	}
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (pow((x - i),2) + ( pow((y - j),2 )) <= ( pow (r,2) ) ){
			 sumbomba += arr[i][j];
				
			}


		}
	}




	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			sum += arr[i][j];
		}
	}
	cout << endl;
	cout << " sumata na chislata ot matricata e: " << sum << endl;
	cout << " sumata na chislata ot bombata e: " << sumbomba << endl;
	cout << "sumata na chislata izvun bombata e : " << sum - sumbomba << endl;

	system("pause");
	return 0;
}