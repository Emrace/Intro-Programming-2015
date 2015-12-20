#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int arr[10][10];
	int  x0, y0, r;
	int sum = 0;
	int i, j;
	

	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			//cout << "arr[" << i << "][" << j << "]= ";
			//cin >> arr[i][j];
			arr[i][j] = i * 10 + j;
		}
	}
	
		cout << "Vuvedete koordinati na bombata: ";
		cout << "x0= ";
		cin >> x0;
		cout << "y0= ";
		cin >> y0;
		cout << "Radius= ";
		cin >> r;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (((x0 - i)*(x0 - i) + (y0 - j)*(y0 - j)) <= r*r)
				
					sum += arr[i][j];
								
			}
		}		
		if (!(((x0 - i)*(x0 - i) + (y0 - j)*(y0 - j)) <= r*r))
			cout << "Elementut ne se namira v radiusa ot bombata. " << endl;
				cout << "Sum= " << sum << endl; 

		
		system("pause");
		return 0;

}