#include <iostream>
using namespace std;

    int main() {
        int bangunDatar;
        cout << "\nProgram penghitung Luas Bangun Datar\n Keterangan : \n 1 = Luas Persegi \n 2 = Luas Persegi Panjang\n 3 = Luas Segitiga\n\nMasukkan Jenis Luas: ";
        cin >> bangunDatar;

    switch (bangunDatar) {
    //Menghitung luas persegi
    case 1:
    float s, luas;
    cout << "Masukkan panjang sisi: ";
    cin >> s;

    //Rumus persegi
    luas= s*s;
    //output
    cout << "Luas persegi tersebut adalah: " << luas << endl;
    break;

    //Menghitung luas persegi panjang
    case 2:
    float p, l;
    cout << "Masukkan Panjang: ";
    cin >> p;
    cout << "Masukkan Lebar: ";
    cin >> l;

    //Rumus persegi panjang
    luas = p*l;
    //output
    cout << "\nLuas persegi panjang tesebut adalah: " << luas << endl;
    break;

    //Menghitung luas segitiga
    case 3:
    float a, t;
    cout << "Masukkan alas: ";
    cin >> a;
    cout << "Masukkan tinggi: ";
    cin >> t;

    //rumus luas segitiga
    luas = 0.5*a*t;
    //output
    cout << "Luas segitiga tersebut adalah: " << luas << endl;
    break;
    
    case 4:
    default:
        cout << "Pilihan tidak diketahui" << endl;
        break;

return 0;
}}