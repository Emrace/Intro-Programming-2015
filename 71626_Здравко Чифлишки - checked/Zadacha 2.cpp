//Zadacha 2--->
#include<iostream>
using namespace std;
int main()
{
int arr[10][10];
for (int i = 0; i < 10; i++)
for (int j = 0; j < 10; j++)
arr[i][j] = i * 10 + j;
int x0, y0, r;
cout << "vuvedete kordinati na bombata";
cin >> x0;
cout << "vuvedete kordinati na bombata";
cin >> y0;
cout << "Vuvedete radius na bombata";
cin >> r;
int sum = 0;
for (int i = 0; i < 10; i++)
for (int j = 0; j < 10; j++)
{
if (pow(r, 2) >= ((pow(x0 - i, 2)) + ((pow(y0 - i, 2)))))
sum += arr[i][j];
}
cout << sum << endl;
system("pause");
return 0;
}

//1.0\1.0