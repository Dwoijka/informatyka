#include <iostream>
using namespace std;

int main() {
    int wiersze, kolumny;
    int liczba = 1;

    cout << "Podaj liczb� wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczb� kolumn: ";
    cin >> kolumny;

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << liczba << "\t";
            liczba += 2; 
        }
        cout << endl;
    }

    return 0;
}

