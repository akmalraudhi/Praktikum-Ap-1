include <iostream>
using namespace std;

void searching(int array[],int besar, int search);

int main() {
    int besar;
    int search;

    // Pemasukkan ukuran array
    cout << "Masukkan ukuran array : ";
    cin >> besar;
    cout << "\n";

    const int jml = besar + 1;  // ukuran Array +1 untuk sentinel 
    int array[jml];

    // Pemasukkan data array
    for (int i = 0; i < besar; i++) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> array[i];
    }

    // Input search value
    cout << "\nAngka yang dicari : ";
    cin >> search;
    cout << "\n";

    searching(array, jml, search);
}

void searching(int array[],int besar, int search){
// Tambahkan sentinel pada array
array[besar] = search;

// Sentinel linear search
int i = 0;
while (array[i] != search) {
    i++;
}
// Pengecekan
if (i < besar) {
    cout << "Nilai berada di Index ke-" << i << endl;
  } else {
    cout << "Nilai tidak ditemukan dalam array." << endl;
  }

}