#include<iostream>

using namespace std;

int main(){
    cout << "Vyvedete cifra: ";
    int n,a;
    cin >> a;
    cout << "Vyvedete chislo: ";
    cin >> n;
    cout << contains(n,a);
}

bool contains(int n, int b) {
    int temp = n % 10;

    if(temp == b) {
        return true;
    }

    if(n % 10 == 0) {
        return false;
    }
    else {
        contains(n / 10, b);
    }

}
