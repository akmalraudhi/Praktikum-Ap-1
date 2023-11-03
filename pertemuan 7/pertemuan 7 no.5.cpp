#include <iostream>
using namespace std;

void star3(int angka) {
    for (int i = 0; i < angka; i++) {
        for (int j = 0; j <= angka - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= angka - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = angka; i >= 0; i--) {
        for (int j = 0; j <= angka - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= angka - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


int main() {
    int angka;
    cout << "Masukkan jumlah baris: ";
    cin >> angka;

    star3(angka);

    return 0;
}