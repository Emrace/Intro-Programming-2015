#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int arr[10][10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            arr[i][j] = i*10 + j;
        }
    }
    int x,y,r;
    cout << "Vyvedete chislo mejdu 0 i 10: ";
    cin >> x;
    cout << endl;
    cout << "Vyvedete drugo chislo mejdu 0 i 10: ";
    cin >> y;
    cout << endl;
    cout << "Vyvedete radius: ";
    cin >> r;

    int sum = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if((pow((x-i),2) + pow((y-j),2)) <= r*r){

            }
           else {
              sum += arr[i][j];
           }
        }
    }
       cout << sum;
}
