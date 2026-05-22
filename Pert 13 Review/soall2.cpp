//Masukkan sejumlah N angka ke dalam array, kemudian membalik urutam elemen array tersebut dan menampilkannya
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    int arr[100];
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array setelah dibalik: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}