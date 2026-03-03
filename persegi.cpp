#include<iostream>
using namespace std;
 float panjang, lebar;

 void input(){
    cout << "panjang persegi = " ;
    cin >> panjang;
    cout << "lebar persegi = " ;
    cin >> lebar;
 }

 float LuasPersegiPanjang(){
    return panjang*lebar;
 }

 void output(){
    cout << "hasilnya = " << LuasPersegiPanjang() << "m";
 }

 int main(){
    input();
    output();
 }
