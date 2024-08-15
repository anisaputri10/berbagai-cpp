#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    double alas, tinggi, luas;

    // Meminta pengguna untuk memasukkan nilai alas dan tinggi
    cout << "Masukkan panjang alas segitiga: ";
    cin >> alas;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    // Menghitung luas segitiga
    luas = 0.5 * alas * tinggi;

    // Menampilkan hasil luas
    cout << "Luas segitiga adalah: " << luas << endl;

    return 0;
}

