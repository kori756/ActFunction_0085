#include<iostream>
using namespace std;
 float p, l;

 void input(){
    cout << "masukan panjang= " ;
    cin >> p;
    cout << "masukan lebar= " ;
    cin >> l;
 }

 float LuasPersegi(){
    return p*l;
 }

 void output(){
    cout << "hasil = " << LuasPersegi();
 }

 int main(){
    input();
    output();
 }
