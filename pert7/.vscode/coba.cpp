#include <iostream>
using namespace std;

int main(){
    string nama;
    int tinggi;

    cout << "Masukkan nama anda: ";
    getline(cin,nama);

    cout << nama << endl;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for(int a = 0; a <= tinggi; a++){
        for(int b = 0; b <= a; b++){
            cout << " ";
        }
        cout << endl;
        return 0;
    }
}