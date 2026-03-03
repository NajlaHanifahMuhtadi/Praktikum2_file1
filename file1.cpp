#include <iostream>
using namespace std;

int p, l, luas;

void input(){
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

int luasPersegi(){
    return p*l;
}

void output(){
    cout << "Hasilnya = " << luasPersegi()<< endl;
    cout << "Terimakasih";
}

int main(){
    
}