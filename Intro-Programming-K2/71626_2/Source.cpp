/*Задача 2 (1 точка). Напишете програма която прима от конзолата число и цифра.
Напишете рекурсивна функция, която проверява дали цифрата се съдържа в числото.
Пример:
123 9 -> false
45678 5 -> true
Бонус (0,4 точки): Програмата да приема две числа и чрез рекурсивната функция да
проверява дали в първото число се съдържа второто.*/
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
