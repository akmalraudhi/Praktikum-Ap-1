#include <iostream>
using namespace std;

int main () {
  int baris;
  cout << "masukan jumlah baris : ";
  cin >> baris;

 for(int i = baris; i >= 0; i-- ){
   for(int j = 0; j <= i; j++) {
      cout << "* ";
   }
   cout << endl;
 }  
}