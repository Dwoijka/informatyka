#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsz¹ liczbê: ";
    cin >> a;
    cout << "Podaj drug¹ liczbê: ";
    cin >> b;

    int suma = a + b;
    cout << "Suma: " << suma << endl;

    if (suma % 2 == 0) {
        cout << "Suma jest liczb¹ parzyst¹." << endl;
    } else {
        cout << "Suma jest liczb¹ nieparzyst¹." << endl;
    }

    return 0;
}

