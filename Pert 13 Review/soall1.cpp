// buat program menghitung nilai mahasiswa dan input nama menggunakan vector atau array dan buat rata rata nilai mahasiswa tersebut
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    system("cls");
    vector<string> names;
    vector<double> scores;
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        double score;
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> name;
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> score;
        names.push_back(name);
        scores.push_back(score);
    }

    cout << "\nDaftar Mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nama: " << names[i] << ", Nilai: " << scores[i] << endl;
    }

    // Menghitung rata-rata nilai
    double total = 0;
    for (double score : scores) {
        total += score;
    }
    double average = total / n;
    cout << "\nRata-rata nilai mahasiswa: " << average << endl;

    return 0;
}