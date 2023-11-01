#include <iostream>
using namespace std;

int main() {
    // Kurs mata uang
    const int usd_to_idr = 15000;
    const double eur_to_usd = 0.997;

    // Jumlah tabungan dalam mata uang asing
    const int usd_savings = 12000;
    const int eur_savings = 20000;

    // Konversi tabungan menjadi Rupiah
    const int idr_savings = usd_savings * usd_to_idr + eur_savings * eur_to_usd * usd_to_idr;

    // Harga mobil baru dalam Rupiah
    const int car_price = 425000000;

    // Perhitungan sisa uang setelah membeli mobil
    const int remaining_idr = idr_savings - car_price;

    // Tampilkan hasil perhitungan
    cout << "Dana Pak Anto setelah semua tabungan dikonversi ke Rupiah:" << endl;
    cout << "Rp " << idr_savings << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil:" << endl;
    cout << "Rp " << remaining_idr << endl;

    return 0;
}