#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout << "Podaj pierwsza liczbe: ";
    cin >> num1;
    cout << "Podaj druga liczbe: ";
    cin >> num2;
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Wynik: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Wynik: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Wynik: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Wynik: " << num1 / num2 << endl;
            } else {
                cout << "Blad: Dzielenie przez zero!" << endl;
            }
            break;
        default:
            cout << "Blad: Nieznany znak dzialania!" << endl;
    }

    return 0;
}

