#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;

       cout << "Podaj szeroko��: ";
    cin >> szerokosc;
    cout << "Podaj wysoko��: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < szerokosc - 2 * i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}

