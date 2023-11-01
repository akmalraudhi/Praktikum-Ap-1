#include <iostream>
#include <string>

using namespace std;

bool apakahHurufAngka(char karakter) {
    return (karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z') || (karakter >= '0' && karakter <= '9');
}

int main() {
    string password;
    cout << "Masukkan password (8 karakter, huruf dan angka): ";
    cin >> password;


    if (password.length() != 8) {
        cout << "Password harus terdiri dari 8 karakter." << endl;
    } else {
        bool memilikiHuruf = false;
        bool memilikiAngka = false;

        for (char karakter : password) {
            if (!apakahHurufAngka(karakter)) {
                cout << "Password hanya boleh terdiri dari huruf dan angka." << endl;
                return 1;
            } else if (isalpha(karakter)) {
                memilikiHuruf = true;
            } else if (isdigit(karakter)) {
                memilikiAngka = true;
            }
        }

        if (!memilikiHuruf || !memilikiAngka) {
            cout << "Password harus mengandung minimal satu huruf dan satu angka." << endl;
            return 1;
        }


        string passwordTerkonversi = "";
        for (char karakter : password) {
            if (isalpha(karakter)) {
                char karakterTerkonversi = ((karakter - 'a' + 2) % 26) + 'a';
                passwordTerkonversi += karakterTerkonversi;
            } else if (isdigit(karakter)) {
                int angkaTerkonversi = (karakter - '0') * 2;
                passwordTerkonversi += to_string(angkaTerkonversi);
            }
        }

        cout << "Password yang tersimpan: " << passwordTerkonversi << endl;
        return 0;
    }

    cout << "Password tidak valid. Silakan coba lagi." << endl;
    return 1;
}