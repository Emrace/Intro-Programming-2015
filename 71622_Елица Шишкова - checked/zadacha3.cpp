#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Vuvedi n:"; 
	cin >> n;
	int arr[10];
	double p = 1;

	for (int i = n; i >=0; i--)
	{
		cout << "Vuvedi koeficientite na funkciqta";
		cin >> arr[i];
		
	}

	for(int j = n; j >= 0; j--)
	{
	
	double p = j*arr[j];
    cout << p << endl;
	
	}
	cout <<"Nai-visokata stepen e:"<<  n << endl;

	system("Pause");
	return 0; 
	//1.0\1.0
}