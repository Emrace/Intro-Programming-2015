/*������ 2 (1 �����). �������� �������� ����� ����� �� ��������� ����� � �����.
�������� ���������� �������, ����� ��������� ���� ������� �� ������� � �������.
������:
123 9 -> false
45678 5 -> true
����� (0,4 �����): ���������� �� ������ ��� ����� � ���� ������������ ������� ��
��������� ���� � ������� ����� �� ������� �������.*/
#include<iostream>
using namespace std;
int f(int chislo, int cifra)
{
bool flag = false;
if (chislo <= 0){
return flag;
}
if (chislo % 10 == cifra)
{
flag = true;
return flag;
}
else return f(chislo / 10, cifra);
}
int main()
{
cout << "vuvedete chisloto";
int chislo; cin >> chislo;
cout << "Vuvedete tursenata cifra";
int cifra; cin >> cifra;
cout << f(chislo, cifra) << endl;
system("pause");
return 0;
}
