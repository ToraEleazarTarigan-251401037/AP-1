#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    float hasil = a / b;

    if (a % b == 0 and hasil > 2) {
        cout << "VALID";
    }
    else {
        cout << "TIDAK";
    }
    return 0;
}