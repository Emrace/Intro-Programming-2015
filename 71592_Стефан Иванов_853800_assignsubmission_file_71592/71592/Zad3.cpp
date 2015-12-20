#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Vyvedete chislo n - nai-visokata stepen na polinoma: ";
    cin >> n;
    int arr[50];
    for(int i = 0; i <= n; i++) {
        cout << "Vyvedete koefintite: ";
        cin >> arr[i];
    }
    int newArray[50];
    int k = n;
    for(int i = 0; i < n; i++) {
        newArray[i] = n * arr[i];
        n--;
    }
    for(int i = 0; i < n; i++){
        cout << newArray[i] << " ";
    }
}
