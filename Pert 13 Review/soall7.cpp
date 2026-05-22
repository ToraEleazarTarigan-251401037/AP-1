//buat class bernama tabungan untuk saldo,setor,tarik dan tampilkan saldo akhir, serta pesan gagal jika saldo tidak cukup untuk penarikan
#include <iostream>
using namespace std;
class Tabungan {
private:
    double saldo;
public:
    Tabungan(double saldoAwal) : saldo(saldoAwal) {}

    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Setor berhasil. Saldo sekarang: " << saldo << endl;
    }

    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan gagal. Saldo tidak cukup." << endl;
        } else {
            saldo -= jumlah;
            cout << "Tarik berhasil. Saldo sekarang: " << saldo << endl;
        }
    }

    void tampilkanSaldo() const {
        cout << "Saldo akhir: " << saldo << endl;
    }
};
int main() {
    system("cls");
    double saldoAwal;
    cout << "Masukkan saldo awal: ";
    cin >> saldoAwal;

    Tabungan tabungan(saldoAwal);

    int pilihan;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Setor" << endl;
        cout << "2. Tarik" << endl;
        cout << "3. Tampilkan Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                double jumlahSetor;
                cout << "Masukkan jumlah setor: ";
                cin >> jumlahSetor;
                tabungan.setor(jumlahSetor);
                break;
            }
            case 2: {
                double jumlahTarik;
                cout << "Masukkan jumlah tarik: ";
                cin >> jumlahTarik;
                tabungan.tarik(jumlahTarik);
                break;
            }
            case 3:
                tabungan.tampilkanSaldo();
                break;
            case 4:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 4);

    return 0;
}