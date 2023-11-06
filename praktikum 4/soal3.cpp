#include <iostream>
using namespace std;
int main() {
    int n, fn, fn1, fn2;

    //input
    cout << "Program deret fibonacci" << endl;
    cout << "Masukkan angka : ";
    cin >> n;
    
    //deklarasi
    fn1 = 1;
    fn2 = 0;
    
    cout << fn1 << " ";
    for (int i = 1; i <= n; i++) {
        fn = (fn1 + fn2);
        fn2 = fn1;
        fn1 = fn;
        cout << fn << " ";
    }

    
    return 0;
}