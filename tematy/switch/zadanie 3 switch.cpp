#include <iostream>
using namespace std;

int main() {
    int hours;
    char vehicle;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> hours;
    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> vehicle;

    switch (vehicle) {
        case 'S':
        case 's':
            cout << "Oplata za parkowanie: " << hours * 5 << " zl" << endl;
            break;
        case 'M':
        case 'm':
            cout << "Oplata za parkowanie: " << hours * 3 << " zl" << endl;
            break;
        case 'A':
        case 'a':
            cout << "Oplata za parkowanie: " << hours * 10 << " zl" << endl;
            break;
        default:
            cout << "Blad: Nieznany typ pojazdu!" << endl;
    }

    return 0;
}

