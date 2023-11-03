#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "x = 1"<< endl << "6*( ax² + bx +c)" << endl << endl;
    cout << "Masukkan bilangan bulat a: ";
    cin >> a;

    cout << "Masukkan bilangan bulat b: ";
    cin >> b;

    cout << "Masukkan bilangan bulat c: ";
    cin >> c;

    int x = 1;
    int hasil = 6 * (a * x * x + b * x + c);

    cout << "Hasil perhitungan: " << hasil << endl;

    return 0;
}