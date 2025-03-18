#include <iostream>
using namespace std;

int main() {
    int liczby[10], suma = 0;

    cout << "Podaj 10 liczb ca³kowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0) {
            cout << liczby[i] << ", ";
            suma += liczby[i];
        }
    }
    cout << endl;

    cout << "Suma liczb parzystych: " << suma << endl;

    return 0;
}

