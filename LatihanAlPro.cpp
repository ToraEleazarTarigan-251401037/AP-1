#include <iostream>
using namespace std;

int main() {
    char ulang;
    do {
        string nama; 
        int gol, anak;
        long base = 0, tunjangan = 0, total = 0;

        cout << "\nMasukkan Nama Anda : "; 
        cin >> nama;
        cout << "Masukkan Golongan (1,2,3) : "; 
        cin >> gol;
        cout << "Jumlah anak : "; 
        cin >> anak;

        base = (gol == 1) ? 5000000 : (gol == 2) ? 3000000 : (gol == 3) ? 2500000 : 0;
        
        if (base == 0) { 
            cout << "Golongan tidak valid!\n"; 
            continue; 
        }

        if (anak > 2) {
            tunjangan = anak * 750000;
        } else if (anak > 0) {
            tunjangan = anak * 500000;
        }

        total = base - (base * 0.05) + tunjangan;

        cout << "Gaji total : Rp. " << total << ",-\n";

        cout << "------------------------------\n";
        cout << "Hitung data lain? (y/n) : "; 
        cin >> ulang;
        
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}