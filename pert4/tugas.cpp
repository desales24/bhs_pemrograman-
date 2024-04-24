#include <iostream>
using namespace std;

int main() {
    int _Menu;
    double iPertama, iKedua, iHasil;

    cout << "Masukkan angka 1: " << endl;
    cin >> iPertama;
    cout << "Masukkan angka 2: " << endl;
    cin >> iKedua;
    cout << endl;

Menu:
    cout << "Menu Pilihan: " << endl;
    cout << "1.Penjumlahan" << endl;
    cout << "2.Pengurangan" << endl;
    cout << "3.Perkalian" << endl;
    cout << "4.Pembagian" << endl;
    cout << endl;
    cout << "Masukkan Pilihan: ";
    cin >> _Menu;

    switch (_Menu) {
        default:
            cout << "PILIHAN MENU TIDAK ADA" << endl;
            cout << "SILAHKAN COBA LAGI." << endl;
            goto Menu;
            break;

        case 1:
            cout << "Penjumlahan" << endl;
            iHasil = iPertama + iKedua;
            cout << "Maka, Hasil Dari Penjumlahan: " << iHasil << endl;
            break;

        case 2:
            cout << "Pengurangan" << endl;
            iHasil = iPertama - iKedua;
            cout << "Maka, Hasil Dari Pengurangan: " << iHasil << endl;
            break;

        case 3:
            cout << "Perkalian" << endl;
            iHasil = iPertama * iKedua;
            cout << "Maka, Hasil Dari Perkalian: " << iHasil << endl;
            break;

        case 4:
            cout << "Pembagiain" << endl;
            iHasil = iPertama / iKedua;
            cout << "Maka, Hasil Dari Pembagian: " << iHasil << endl;
            break;
    }
    return 0;
}