#include <iostream>
using namespace std;

void garis() { // Function output garis
    for(int i = 1; i <= 100; i++) {
        cout << "-";
    }
    cout << "\n";
}

int main() {
    int ukArray = 9; // Ukuran array
    int myArray[ukArray] = {17, 2, 6, 7, 20, 4, 8, 15, 16}; // Deklarasi array dan nilai-nilai

    // Mencari nilai tertinggi dan indeksnya
    int maxVal = myArray[0];
    int indexArray = 0;

    for (int i = 1; i < ukArray; i++) { // Loop check value tertinggi
        if (myArray[i] > maxVal) {
            maxVal = myArray[i];
            indexArray = i;
        }
    }

  // Output
    garis();
    cout << "Program Pencari Nilai Tertinggi Array beserta Index." << endl;
    garis();
    
    cout << "Nilai tertinggi dalam array adalah: " << maxVal << endl;
    if (indexArray >= 0) {
        cout << "Nilai tersebut terdapat pada indeks: " << indexArray << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << endl;
    }

    return 0;
}
