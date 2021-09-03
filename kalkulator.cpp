#include <iostream>
using namespace std;

int main(){
    
    float nilai1,nilai2,hasil;
    char aritmatika;

    cout << "Program Kalkulator" << endl << endl;


    //ini inputan untuk nilai1,aritmatika,dan nilai2
    cout << "Masukan nilai ke 1: " << endl;
    cin >> nilai1;
    cout << "Masukan operator Anda, +,-,/,*: " << endl;
    cin >> aritmatika;
    cout << "Masukan nilai ke 2: " << endl;
    cin >> nilai2;
    
    cout << "Hasil perhitungan: ";
    cout << nilai1 << aritmatika << nilai2;
    
    //untuk menghitung hasil
    switch(aritmatika){
        case '+':
        hasil = nilai1 + nilai2;
    break;
        case '-':
        hasil = nilai1 - nilai2;
    break;
        case '/':
        hasil = nilai1 / nilai2;
    break;
        case '*':
        hasil = nilai1 * nilai2;}    
    
    cout << "=" << hasil << endl; // menampilkan hasil hitung
    return 0;
}
