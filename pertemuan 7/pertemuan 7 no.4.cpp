#include <iostream>
using namespace std;

int main () {
  int baris;
  cout << "masukan jumlah baris : ";
  cin >> baris;

  for (int i = baris; i >= 0; i--) {
    for (int s = baris; s >= i; s--) {
      cout << " ";
    }
    for (int r = 0; r < i; r++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}