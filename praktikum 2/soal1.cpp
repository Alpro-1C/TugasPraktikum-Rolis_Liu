#include <iostream>

using namespace std;

int main () {
    /*Menggunakan variabel tambahan*/
    int firstValue = 10;
    int secondValue = 8;
    int newVariabel = {};
    newVariabel = firstValue;
    firstValue = secondValue;
    secondValue = newVariabel; 

    cout << "nilai pertama: " << firstValue << endl;
    cout << "nilai kedua: " << secondValue << endl;

    /*Tanpa menggunakan variabel tambahan*/
    int bil1 = 10;
    int bil2 = 8;

    bil1 = bil1 ^ bil2;
    bil2 = bil1 ^ bil2;
    bil1 = bil1 ^ bil2;

    cout << "Nilai pertama: " << bil1 << endl;
    cout << "Nilai kedua: " << bil2 << endl;

    return 0;
}