#include <iostream>
using namespace std;

int binary(int array[], int low, int high, int search);

int main() {
    int besar;
    int search;

    // Input ukuran array
    cout << "Masukkan ukuran array : ";
    cin >> besar;
    cout << "\n";

    // const dideklarasikan setelah input ukuran array karena const tidak bisa kosong
    const int jml = besar;
    int array[jml];

    // Input elemen-elemen array
    for (int i = 0; i < jml; i++) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> array[i];
    }


    // Input nilai yang dicari
    cout << "\nAngka yang dicari : ";
    cin >> search;
    cout << "\n";

    // Binary search
    int result = binary(array, 0, jml - 1, search);

    // Check
    if (result != -1) {
        cout << "Nilai berada di Index ke-" << result << endl;
    } else {
        cout << "Nilai tidak ditemukan dalam array." << endl;
    }

    return 0;
}