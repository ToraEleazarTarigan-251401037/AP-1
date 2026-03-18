#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Masukkan x: ";
    cin >> x;
    if (x > 5 && x < 8) {
        cout << "A";
    } else if (x > 5) {
        cout << "B";
    } else {
        cout << "C";
    }
}