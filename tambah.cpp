#include <iostream>

using namespace std;

int main() {
    int a, b, c, total;

    cout << "Masukkan angka pertama: ";
    cin >> a;

    cout << "Masukkan angka kedua: ";
    cin >> b;

    cout << "Masukkan angka ketiga: ";
    cin >> c;

    total = a + b + c;

    cout << "Total dari ketiga angka adalah: " << total << endl;

    cin.get();
    
    return 0;
}
