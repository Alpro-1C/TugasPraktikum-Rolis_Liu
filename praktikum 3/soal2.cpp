#include <iostream>

using namespace std;

int main () {
    //Soal 2 menentukan angka terbesar
    int angka1, angka2, angka3, angkaTerbesar;

    //input
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    //pengkondisian
    if (angka1 > angka2 && angka1 > angka3) {
        cout << "Angka terbesar adalah: " << angka1 << endl;
    } else if (angka2 > angka1 && angka2 > angka3) {
        cout << "Angka terbesar adalah: " << angka2 << endl;
    } else if (angka3 > angka1 && angka3 > angka2) {
        cout << "Angka terbesar adalah: " << angka3 << endl;
    } else {
        cout << "Tidak ada hasil" << endl;
    }

   return 0;
}