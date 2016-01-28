#include<iostream>

using namespace std;

int main(){
    cout << "Vyvedete simvolen niz s dyljina ne po-golqma ot 100";
    char c[100];
    cin >> c;
    coutn << avgF(c);



}

int avgF(char arr[]) {
    int count1 = 0;
    int counter = 0;
    int sum = 0;
    bool avg = false;
    for(int i = 0; i < arr.length; i++) {
        int temp[arr.length];
        temp = (int)arr[i];
        if(temp[i] - 1 == temp[i - 1]) {
            avg = true;
            count1++;
        }
        else if(avg) {
            sum += count1;
            counter++;
        }
         return sum/counter;
    }
}
