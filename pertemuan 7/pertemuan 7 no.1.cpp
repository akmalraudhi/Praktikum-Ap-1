#include <iostream>
using namespace std;

double mToCm(double meter) { return meter * 100; }

double cmToM(double centimeter) { return centimeter / 100; }

int main() {
  double panjangPitaMeter, panjangIkatanCm;

  cout << "Masukkan panjang pita (meter): ";
  cin >> panjangPitaMeter;

  cout << "Masukkan panjang ikatan (cm): ";
  cin >> panjangIkatanCm;
  cout << endl;

  double panjangPitaCm = mToCm(panjangPitaMeter);

  int jumlahIkatan = static_cast<int>(panjangPitaCm / panjangIkatanCm);

  double sisaPitaCm = panjangPitaCm - jumlahIkatan * panjangIkatanCm;

  cout << "Panjang pita: " << panjangPitaMeter << " m atau " << panjangPitaCm
       << " cm" << endl;
  cout << "Panjang per ikatan: " << panjangIkatanCm << " cm" << endl;
  cout << "Jumlah ikatan bunga yang dapat dibuat: " << jumlahIkatan
       << " ikatan" << endl;
  cout << "Sisa pita: " << cmToM(sisaPitaCm) << " m" << endl;

  return 0;
}