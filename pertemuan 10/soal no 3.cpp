#include <iostream>
using namespace std; 

struct ItemPenjualan {
    string kode;
    string nama;
    int jumlah;
    double hargaSatuan;
};

int main() {
    const int JUMLAH_DATA = 20;

    ItemPenjualan penjualan[JUMLAH_DATA];

    for (int i = 0; i < JUMLAH_DATA; ++i) {
        cout << "Masukkan data penjualan ke-" << i + 1 << ":\n";
        cout << "Kode barang   : ";
        cin >> penjualan[i].kode;
        cout << "Nama barang   : ";
        cin >> penjualan[i].nama;
        cout << "Jumlah        : ";
        cin >> penjualan[i].jumlah;
        cout << "Harga satuan  : Rp.";
        cin >> penjualan[i].hargaSatuan;
        cout << "\n";
    }

    double totalPenjualan = 0.0;
    for (int i = 0; i < JUMLAH_DATA; ++i) {
        totalPenjualan += penjualan[i].jumlah * penjualan[i].hargaSatuan;
    }

    double keuntungan = 0.1 * totalPenjualan;

  cout << "Total harga penjualan: Rp." << totalPenjualan << endl;
  cout << "Keuntungan (10%): Rp." << keuntungan << endl;

    return 0;
}