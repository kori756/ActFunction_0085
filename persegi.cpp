#include<iostream>
using namespace std;
 float p, l;

 void input(){
    cout << "masukan panjang persegi = " ;
    cin >> p;
    cout << "masukan lebar persegi = " ;
    cin >> l;
 }

 float LuasPersegiPanjang(){
    return p*l;
 }

 void output(){
    cout << "hasilnya = " << LuasPersegiPanjang();
 }

 int main(){
    input();
    output();
 }
