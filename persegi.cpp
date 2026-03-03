#include<iostream>
using namespace std;
 float p, l;

 void input(){
    cout << "masukan panjang= " ;
    cin >> p;
    cout << "masukan lebar= " ;
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
