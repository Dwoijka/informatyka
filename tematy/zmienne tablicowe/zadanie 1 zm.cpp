#include <iostream>
using namespace std;

int main() {
    int liczby[5], suma = 0;
    
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
        suma += liczby[i];  
    }

    double srednia = suma / 5.0;
    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}

