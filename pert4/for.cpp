#include <iostream>
using namespace std;

int main(){

    cout << "Interation Statemen" << endl;
    cout << "Penggunaan FOR" << endl;

    for(int a = 1 ; a <= 5; a++){
        cout << a << endl;
    }

    return 0;
}

//Apada bedanya int di dalam dan int di luar
//for di dalam kegunaannya di gunakan untuk fungsi for yang ada, sedangkan bila for terdapat di luar, maka akan di anggap mempunyai 2 variabel int yg berbeda, atau dengan kata lain for di luar di gunakan untuk global sedangkan yang di dalam hanya punya yang dalam