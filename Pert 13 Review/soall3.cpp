//disini implementasi fungsi soall3.h
#include "soall3.h"
int main() {
    system("cls");
    double celsius;
    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);
    double kelvin = celsiusToKelvin(celsius);

    cout << "Suhu dalam Fahrenheit: " << fahrenheit << endl;
    cout << "Suhu dalam Kelvin: " << kelvin << endl;

    return 0;
}
