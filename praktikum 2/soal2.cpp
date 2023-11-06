#include <iostream>

using namespace std;

int main () {
    int n, m, hasilBagi, sisa;
    
     for ( int i = 0 ; i < 100 ; i++) {
        cout << "-";
    }
    
    cout << "\nJumlah Bebek Pak Tatang: ";
    cin >> n;
    cout << "Jumlah teman Pak Tatang: ";
    cin >> m;
    
    hasilBagi = n/m;
    sisa = n % m;

    cout << "Jumlah masing-masing bebek yang diberikan kepada teman Pak Tatang adalah " << hasilBagi << " ekor dan memiliki sisa " << sisa << " ekor." << endl;

     for ( int i = 0 ; i < 100 ; i++) {
        cout << "-";
    }
    return 0;
} 