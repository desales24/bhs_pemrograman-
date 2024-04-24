#include <iostream>
using namespace std;
//maksudnya gimana?

void penggunaandowhile(){
    int a = 1;
    int b = 2;
    
    do{
        cout << a << endl;
        a = a + 1;
    }while(a <= b);
}

void penggunaanwhile(){
    cout << "Penggunaan WHILE" << endl;
    int a = 1;
    int b = 2;

    while(a <= b){
        cout << a << endl;
        a = a + 1;
    }
}

void penggunaanehilebreak(){
    cout << "Penggunaan WHILE BREAK" << endl;
    int a = 0;
    while(a <= 10){
        a = a + 1;
        if (a == 11){
            cout << a << endl;
            break;
        }
        cout << "looping while berjalan" << endl;
    }
    cout << "looping di luar while berhenti" << endl;
}

int main(){
    penggunaandowhile();
    penggunaanwhile();
    penggunaanehilebreak();

    return 0;
}