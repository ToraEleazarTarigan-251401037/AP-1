//hitung statisitik dari sekumpulan nilai menggunakan fungsi, ada total, rata rata, nilai tertinggi dan nilai terendah dan fungsi menerima vector
// atau array sebagai parameter
#include <iostream>
#include <vector>
using namespace std;
double calculateTotal(const vector<double>& scores) {
    double total = 0;
    for (double score : scores) {
        total += score;
    }
    return total;
}
double calculateAverage(const vector<double>& scores) {
    if (scores.empty()) return 0;
    return calculateTotal(scores) / scores.size();
}
double findMaximum(const vector<double>& scores) {
    if (scores.empty()) return 0;
    double max = scores[0];
    for (double score : scores) {
        if (score > max) {
            max = score;
        }
    }
    return max;
}
double findMinimum(const vector<double>& scores) {
    if (scores.empty()) return 0;
    double min = scores[0];
    for (double score : scores) {
        if (score < min) {
            min = score;
        }
    }
    return min;
}
int main() {
    system("cls");
    vector<double> scores;
    int n;
    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    cout << "Masukkan " << n << " nilai: ";
    cout << endl;
    for (int i = 0; i < n; i++) {
        double score;
        cin >> score;
        scores.push_back(score);
    }

    double total = calculateTotal(scores);
    double average = calculateAverage(scores);
    double max = findMaximum(scores);
    double min = findMinimum(scores);

    cout << "\nTotal nilai: " << total << endl;
    cout << "Rata-rata nilai: " << average << endl;
    cout << "Nilai tertinggi: " << max << endl;
    cout << "Nilai terendah: " << min << endl;

    return 0;
}
