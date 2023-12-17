#include <iomanip>
#include <iostream>
using namespace std;

const int JUMLAH_BARANG = 5;

int main() {
  string namaBarang[JUMLAH_BARANG];
  double harga[JUMLAH_BARANG];
  int terjual[JUMLAH_BARANG];

  cout << "Masukkan data penjualan barang:" << endl;
  for (int i = 0; i < JUMLAH_BARANG; ++i) {
    cout << "Item " << i + 1 << endl;

    cout << "Nama barang: ";
    cin >> namaBarang[i];

    cout << "Harga: Rp.";
    cin >> harga[i];

    cout << "Jumlah terjual: ";
    cin >> terjual[i];
  }

  double totalPenjualan = 0;
  for (int i = 0; i < JUMLAH_BARANG; ++i) {
    totalPenjualan += harga[i] * terjual[i];
  }

  int maxTerjual = terjual[0];
  int indexLaku = 0;
  for (int i = 1; i < JUMLAH_BARANG; ++i) {
    if (terjual[i] > maxTerjual) {
      maxTerjual = terjual[i];
      indexLaku = i;
    }
  }

  cout << fixed << setprecision(2);
  cout << "\nRekapitulasi Penjualan Barang:" << endl;
  cout << "-----------------------------" << endl;
  for (int i = 0; i < JUMLAH_BARANG; ++i) {
    cout << "Item " << i + 1 << ": " << namaBarang[i]
         << " - Total Penjualan: Rp." << (harga[i] * terjual[i]) << endl;
  }
  cout << "-----------------------------" << endl;
  cout << "Total penjualan di Minimarket adalah: Rp." << totalPenjualan << endl;
  cout << "Item yang paling laku adalah item ke-" << indexLaku + 1 << ": "
       << namaBarang[indexLaku] << endl;

  return 0;
}