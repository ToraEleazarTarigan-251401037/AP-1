//data mahasiswa menggunakan struct : nama, NIM, nilai dan tampilkan data nilai tertinggi
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Mahasiswa {
    string nama;
    string NIM;
    double nilai;
};

bool compareMahasiswa(const Mahasiswa& a, const Mahasiswa& b) {
    return a.nilai > b.nilai;
}

int main() {
    system("cls");
    vector<Mahasiswa> daftarMahasiswa;
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Mahasiswa m;
        cout << "Masukkan data mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, m.nama);
        cout << "NIM: ";
        getline(cin, m.NIM);
        cout << "Nilai: ";
        cin >> m.nilai;
        daftarMahasiswa.push_back(m);
    }

    sort(daftarMahasiswa.begin(), daftarMahasiswa.end(), compareMahasiswa);

    cout << "\nData mahasiswa dari nilai tertinggi ke terendah:" << endl;
    for (const auto& m : daftarMahasiswa) {
        cout << "Nama: " << m.nama << ", NIM: " << m.NIM << ", Nilai: " << m.nilai << endl;
    }

    return 0;
}