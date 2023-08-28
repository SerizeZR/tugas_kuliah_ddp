#include <iostream>

using namespace std;

int main(){
    
    bool adaAir = true;

    if(adaAir){
        cout << "Masuk ke kamar mandi." << endl;

        cout << "Buka keran air." << endl;

        cout << "Basahi tubuh dengan air." << endl;

        cout << "Gunakan sabun dan sampo." << endl;

        cout << "Bilas tubuh dengan air bersih." << endl;

        cout << "Matikan keran air." << endl;

        cout << "Keringkan diri dengan handuk." << endl;

        cout << "Keluar dari kamar mandi." << endl;
    }else{
        cout << "Maaf, tidak ada air saat ini. Tunggu hingga air tersedia." << endl;
    }

    cin.get();

    return 0;
}
