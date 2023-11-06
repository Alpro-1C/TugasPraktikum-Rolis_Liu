#include <iostream>
using namespace std;

    void loop() {
        for (int i = 1; i < 100; i++){
            cout << "-";
        }
    }

int main () {
    //Menentukan variabel
    int batas, ganjil, genap, prima;

    cout << "\nProgram menentukan bilangan ganjil, genap, dan prima" << endl;

    loop();

    cout << "\nMasukkan batas angka: ";
    cin >> batas;

    //bilangan ganjil
    cout << "Bilangan ganjil antara 1 dan " << batas << " : ";
    
    ganjil = 0;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
            ganjil += i;
        } else {}
     }

    //bilangan genap
    cout << "\nBilangan genap antara 1 dan " << batas << " : ";
    
    genap = 0;
    for (int i = 0; i <= batas; i += 2)
    {
        cout << i << " ";
        genap += i;
    }

    //bilangan prima
    cout << "\nBilangan prima antara 1 dan " << batas << " : ";
    
    prima = 0;
    for (int i = 1; i <= batas; i++) {
        int mod = 0;
        for (int j = i; j > 0; --j) {
            int y = i % j;
            if (y == 0) {
                mod++;
            }
        }    
    if (mod == 2) {
        cout << i << " ";
        prima += i;
    }
    }

    //menghitung jumlahnya
    cout << "\nJumlah seluruh bilangan ganjil antara 1 dan " << batas << " : " << ganjil << endl;
    cout << "Jumlah seluruh bilangan genap antara 1 dan " << batas << " : " << genap << endl;
    cout << "Jumlah seluruh bilangan prima antara 1 dan " << batas << " : " << prima << endl;

    //pemfaktoran bil ganjil
    cout << "Faktor-faktor dari jumlah ganjil tersebut adalah : ";
    for (int i = 1; i <= ganjil; i++) {
        if (ganjil % i == 0) {
            cout << i << " ";
        } else {}
    }

    //pemfaktoran bil genap
    cout << "\nFaktor-faktor dari jumlah genap tersebut adalah : ";
    for (int i = 1; i <= genap; i++) {
        if (genap % i == 0) {
            cout << i << " ";
        } else {}
    }

    //pemfaktoran bil prima
    cout << "\nFaktor-faktor dari jumlah prima tersebut adalah : ";
    for (int i = 1; i <= prima; i++) {
        if (prima % i == 0) {
            cout << i << " ";
        } else {}
    }

    return 0;
   }

