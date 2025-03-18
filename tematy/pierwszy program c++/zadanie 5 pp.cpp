#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsz¹ liczbê: ";
    cin >> a;
    cout << "Podaj drug¹ liczbê: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Ró¿nica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;
    cout << "Iloraz: " << a / b << endl;
    cout << "Reszta z dzielenia: " << a % b << endl;

    return 0;
}

