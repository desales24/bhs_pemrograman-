#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur untuk merepresentasikan minuman
struct Minuman {
    string nama;
    double harga;
};

int main() {
    // Membuat vektor untuk menyimpan daftar minuman
    vector<Minuman> daftarMinuman;

    // Mengisi vektor dengan daftar minuman
    daftarMinuman.push_back({"Kopi Hitam", 15000});
    daftarMinuman.push_back({"Kopi Susu", 20000});
    daftarMinuman.push_back({"Teh Manis", 10000});
    daftarMinuman.push_back({"Teh Hangat", 12000});
    daftarMinuman.push_back({"Jus Jeruk", 18000});
    daftarMinuman.push_back({"Jus Alpukat", 22000});

    // Menampilkan daftar minuman
    cout << "Daftar Minuman:" << endl;
    for (int i = 0; i < daftarMinuman.size(); ++i) {
        cout << i + 1 << ". " << daftarMinuman[i].nama << " - Rp" << daftarMinuman[i].harga << endl;
    }

    // Menghitung total penjualan
    double totalPenjualan = 0;
    char pilihan;
    do {
        int nomorMinuman;
        cout << "Pilih minuman (1-6): ";
        cin >> nomorMinuman;

        // Memastikan input berada dalam rentang yang valid
        if (nomorMinuman >= 1 && nomorMinuman <= 6) {
            totalPenjualan += daftarMinuman[nomorMinuman - 1].harga;
            cout << "Minuman " << daftarMinuman[nomorMinuman - 1].nama << " berhasil ditambahkan ke keranjang." << endl;
        } else {
            cout << "Nomor minuman tidak valid. Silakan pilih nomor minuman dari 1 hingga 6." << endl;
        }

        cout << "Tambahkan minuman lain? (y/n): ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');

    // Menampilkan total penjualan
    cout << "Total pembelian: Rp" << totalPenjualan << endl;

    return 0;
}