//Program konversi suhu celsius ke fahrenheit dan celcius ke kelvin dan memsisahkan deklarasi fungsi dan implementasi fungsi
#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

