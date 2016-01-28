#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {
  for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
        else {
            return true;
        }
    }
}
int main()
{
 int n;
 cout << "Vyvedete chislo mejdu intervala [5...43]"<<endl;
 cin >> n;
 if(n < 5 || n > 43) {
    cout << "Greshni vhodni danni" << endl;
 }
 else {
    if(n % 2 == 0) {
        int k;
        n = pow(2,k);
        cout << k;
    }
    if(isPrime(n) == true) {
        int sum = 0;
        for(int i = 5; i < n; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
        cout << sum;
    }
 }
}
