//pointer untuk menukar dua bilangan
#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    system("cls");
    int x, y;
    cout << "Masukkan dua bilangan: ";
    cout<<endl;
    cin >> x >> y;

    cout << "Sebelum ditukar: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "Setelah ditukar: x = " << x << ", y = " << y << endl;

    return 0;
}