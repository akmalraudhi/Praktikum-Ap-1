#include <iostream>
#include <cmath>

using  namespace std;

struct Titik {
    double x;
    double y;
};

int main() {

    Titik dot1, dot2;

    cout << "Masukkan koordinat titik pertama (x y): ";
    cin >> dot1.x >> dot1.y;

    cout << "Masukkan koordinat titik kedua (x y): ";
    cin >> dot2.x >> dot2.y;


    double deltaX = dot2.x - dot1.x;
    double deltaY = dot2.y - dot1.y;
    double jarak = sqrt(deltaX * deltaX + deltaY * deltaY);

    cout << "Jarak antara dua titik: " << jarak << endl;

    return 0;
}