#include <iostream>
using namespace std;

int main() {
    int N;

   
    cout << "Podaj liczbe N: ";
    cin >> N;

    int i = 2;
    
    cout << "Liczby parzyste od 2 do " << N << ": " << endl;
    while (i <= N) {
        cout << i << endl;
        i += 2; // Przechodzimy do nastêpnej liczby parzystej
    }

    return 0;
}

