#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[10];
	double p = 1;
			for (int i = 1; i <= n; i++)
			{
			cout << "Vyvedi koeficienti " << endl;
			cin >> a[i];
			}
			for (int j = n; j <= n; j--)
			{
				double p = j*a[j];
				cout << p << endl;
			}
			cout << "Nai-vidokata stepen e " << p << endl;
}
system("pause");
return 0;


