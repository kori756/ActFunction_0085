#include<iostream>
using namespace std;
 float p, l;

 void input(){
    cout << "masukan panjang = " ;
    cin >> p;
    cout << "masukan lebar = " ;
    cin >> l;
 }

 float LuasPersegi(float x, float y){
    return p*l;
 }

 int jumlah(int a, int b, int c){
    return a*b*c;
 }

 void output (){
    cout << "hasilnya = " << LuasPersegi(p,l) << endl;
 }

 int main (){

 
 input ();
 output ();
 cout << "hasil penjumlahan = " << jumlah (9,8,7);
 
}
