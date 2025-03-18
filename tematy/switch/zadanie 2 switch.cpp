#include <iostream>
using namespace std;

int main() {
    float tempCelsius;
    char unit;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> tempCelsius;
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> unit;

    switch (unit) {
        case 'K':
        case 'k':
            cout << "Temperatura w stopniach Kelvina: " << tempCelsius + 273.15 << endl;
            break;
        case 'F':
        case 'f':
            cout << "Temperatura w stopniach Fahrenheita: " << (tempCelsius * 9 / 5) + 32 << endl;
            break;
        default:
            cout << "Blad: Nieznana jednostka!" << endl;
    }

    return 0;
}

