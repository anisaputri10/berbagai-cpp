#include <iostream>
#include <iomanip>

using namespace std;

// Struktur untuk menyimpan informasi parkir
struct Parkir {
    string platNomor;
    int jamMasuk;
    int jamKeluar;
};

// Fungsi untuk menghitung biaya parkir
double hitungBiayaParkir(int jamMasuk, int jamKeluar) {
    const double TARIF_PER_JAM = 5.0; // Ganti sesuai kebijakan parkir
    int durasi = jamKeluar - jamMasuk;
    return durasi * TARIF_PER_JAM;
}

int main() {
    // Inisialisasi variabel parkir
    Parkir dataParkir;

    // Input data parkir
    cout << "Masukkan nomor plat kendaraan: ";
    getline(cin, dataParkir.platNomor);

    cout << "Masukkan jam masuk (24 jam format): ";
    cin >> dataParkir.jamMasuk;

    cout << "Masukkan jam keluar (24 jam format): ";
    cin >> dataParkir.jamKeluar;

    // Hitung biaya parkir
    double biayaParkir = hitungBiayaParkir(dataParkir.jamMasuk, dataParkir.jamKeluar);

    // Output struk pembayaran
    cout << "\n--- Struk Pembayaran Parkir ---\n";
    cout << "Nomor Plat Kendaraan: " << dataParkir.platNomor << endl;
    cout << "Jam Masuk: " << dataParkir.jamMasuk << " WIB" << endl;
    cout << "Jam Keluar: " << dataParkir.jamKeluar << " WIB" << endl;
    cout << fixed << setprecision(2);
    cout << "Biaya Parkir: Rp. " << biayaParkir << endl;

    return 0;
}

