#include <iostream>
using namespace std;

int main() {
  int X, Y;

  cout << "Masukkan nilai X: ";
  cin >> X;

  cout << "masukkan nilai Y: ";
  cin >> Y;

  cout << "Sebelum ditukar: X = " << X << ", Y = " << Y << endl;

  int sementara = X;
  X = Y;
  Y = sementara;

  cout << "Setelah ditukar: X = " << X << ", Y = " << Y << endl;

  return 0;
}