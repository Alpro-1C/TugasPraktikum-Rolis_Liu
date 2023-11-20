#include <iostream>
using namespace std;

    void loop() {
        for (int i = 1; i < 100; i++){ //function garis
            cout << "-";
        }
    }

    void pesan(string bil, int result, int batas) { //function pesan jumlah
        cout << "Jumlah seluruh bilangan " << bil << " antara 1 dan " << batas << " : " << result << endl;
    }

    void enter() { //function enter
        cout << "\n";
    }
    
    void pesanFaktor(string bil) { //function pesan faktor
        cout << "\nFaktor-faktor dari jumlah " << bil << " tersebut adalah : ";
    }

    void pesan2(string bil, int batas) {
        cout << "\nBilangan " << bil << " antara 1 dan " << batas << " : ";
    }



int main () {
    //Menentukan variabel
    int batas, ganjil, genap, prima;

    cout << "\nProgram menentukan bilangan ganjil, genap, dan prima" << endl;

    loop();

    cout << "\nMasukkan batas angka: ";
    cin >> batas;

    //bilangan ganjil
    pesan2("ganjil", batas);
    
    ganjil = 0;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
            ganjil += i;
        } else {}
     }

    //bilangan genap
    pesan2("genap", batas);
    
    genap = 0;
    for (int i = 2; i <= batas; i += 2)
    {
        cout << i << " ";
        genap += i;
    }

    //bilangan prima
    pesan2("prima", batas);
    
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
    enter();
    //menghitung jumlahnya
    enter();
    pesan("ganjil", ganjil, batas);
    pesan("genap", genap, batas);
    pesan("prima", prima, batas);

    //pemfaktoran bil ganjil
    pesanFaktor("ganjil");
    for (int i = 1; i <= ganjil; i++) {
        if (ganjil % i == 0) {
            cout << i << " ";
        } else {}
    }

    //pemfaktoran bil genap
    pesanFaktor("genap");
    for (int i = 1; i <= genap; i++) {
        if (genap % i == 0) {
            cout << i << " ";
        } else {}
    }

    //pemfaktoran bil prima
    pesanFaktor("prima");
    for (int i = 1; i <= prima; i++) {
        if (prima % i == 0) {
            cout << i << " ";
        } else {}
    }

    return 0;
   }

