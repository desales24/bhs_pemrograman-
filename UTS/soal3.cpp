#include <iostream> // sebagai header
using namespace std; 

int main(){ 
    int n, j, i, s; // mendeklarasikan variabel

    cout << "Masukkan jumlah baris: "; // input jumlah baris yang di inginkan
    cin >> n;

    for(i = 1; i <= n; i++){ // mencetak loop untuk mengatur jumlah baris yang akan di cetak
        for (s = i; s < n; s++){ // mencetak spasi sebelum bintang
            cout << " ";
        }
        for (j = 1; j <= i; j++){ // untuk mencetak bintang pada setiap baris dengan jumlah yang di cetak sesuai dengan niai 'i'
            cout << "*";
        }
        cout << "\n"; // untuk mencetak karakter baru, sehingga baris berikutnya akan di cetak pada baris baru
    }

    return 0; // menandakan progam telah selesai
}
