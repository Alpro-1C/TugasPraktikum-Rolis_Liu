#include <iostream>
using namespace std;

void segitigaBintang() {
    int tinggi;
    cout << "Masukkan Tinggi Segitiga : ";
    cin >> tinggi;
    cout << "Tinggi segitiga : " << tinggi <<  endl;
   char bintang = '*';
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
            bintang++;
        } cout << endl;
    }

}

int main() {
    
    segitigaBintang();
    
    return 0;
}
