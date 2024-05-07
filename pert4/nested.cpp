#include <iostream>
using namespace std;

void positifixinc(){
    int a = 1;
    cout << "ini nilai awal i" << endl;
    cout << ++a << "ini nilai predix" << endl;
    cout << a++ << "ini nilai postfix" << endl;
}

void nestedfor(){
    int i = 1;
    int j = 1;
    for(i; i <= 5; i++){ //postfix increment (setelah mendapat nilai  i baru di tambah)
        for(j; j <= i; ++j){ //prefix increment (di tambahkan dan di evaluasi oleh j)
            cout << j << endl;
        }
    }
}

void nestedif(){
    int a;
    if (a <= 5){
        cout << "nilai awal" << endl;
        if(a >= 5){
            cout << "nilai lebih kecil" << endl;

            if (a >= 5){
                cout << "nilai lebih besar" << endl;
            }
        }else{
            cout << "invalid" << endl;
        }
    }
}   

int main(){
    positifixinc();
    nestedfor();
    nestedif();

    return 0;
}