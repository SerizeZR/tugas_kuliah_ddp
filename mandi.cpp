#include <iostream>

using namespace std;

int main(){
    // Langkah 1: Siapkan semua yang diperlukan
    // Misalnya, handuk, sabun, sampo, air panas, dan baju ganti.

    // Langkah 2: Periksa apakah ada air panas
    bool adaAirPanas = true;

    if(adaAirPanas){
        // Langkah 3: Masuki kamar mandi
        cout << "Masuk ke kamar mandi." << endl;

        // Langkah 4: Buka keran air panas
        cout << "Buka keran air panas." << endl;

        // Langkah 5: Basahi tubuh dengan air panas
        cout << "Basahi tubuh dengan air panas." << endl;

        // Langkah 6: Gunakan sabun dan sampo
        cout << "Gunakan sabun dan sampo." << endl;

        // Langkah 7: Bilas tubuh dengan air bersih
        cout << "Bilas tubuh dengan air bersih." << endl;

        // Langkah 8: Matikan keran air panas
        cout << "Matikan keran air panas." << endl;

        // Langkah 9: Keringkan diri dengan handuk
        cout << "Keringkan diri dengan handuk." << endl;

        // Langkah 10: Keluar dari kamar mandi
        cout << "Keluar dari kamar mandi." << endl;
    }else{
        cout << "Maaf, tidak ada air panas saat ini. Tunggu hingga air panas tersedia." << endl;
    }

    return 0;
}
