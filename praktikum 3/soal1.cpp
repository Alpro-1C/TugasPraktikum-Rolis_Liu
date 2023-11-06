#include <iostream>

using namespace std;

int main () {
   //Soal 1 menentukan index
   int a;

    //input
    cout << "Masukkan Nilai: ";
    cin >> a;

    //Pengkondisian
   if (a >= 90) {
    cout << "Selamat! Anda mendapatkan nilai A." << endl;
   } else if (a >= 80) {
    cout << "Anda mendapatkan nilai B." << endl;
   } else if (a >= 70) {
    cout << "Anda mendapatkan nilai C." << endl;
   } else if (a >= 60) {
    cout << "Anda mendapatkan nilai D." << endl;
   } else {
    cout << "Anda mendapatkan nilai E." << endl;
   }

   return 0;
}