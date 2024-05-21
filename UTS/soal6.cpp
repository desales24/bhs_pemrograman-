#include <iostream>
using namespace std;

int main(){
    double a,b;
    int pilih;
    do{
        cout << "Pilihan Menu" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilih;

        switch (pilih)
        {
        case 1: 
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
            cout << "Hasil penjmlahan: " << a + b << endl;
            break;

        case 2:
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
            cout << "Hasil pengurangan: " << a - b << endl;
            break;
        
        case 3:
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
            cout << "Hasil perkalian: " << a * b << endl;
            break;

        case 4:
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
            cout << "Hasil pembagian: " << a / b << endl;
            break;
            
        default:
            cout << "Maaf pilihan tidak tersedia" << endl;
            break;
        }
    } while(pilih != 5);
}