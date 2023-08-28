#include <iostream>

int main() {
    int a, b, c, total;

    std::cout << "Masukkan angka pertama: ";
    std::cin >> a;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> b;

    std::cout << "Masukkan angka ketiga: ";
    std::cin >> c;

    total = a + b + c;

    std::cout << "Total dari ketiga angka adalah: " << total << std::endl;
    std::cin.get();
    
    return 0;
}
