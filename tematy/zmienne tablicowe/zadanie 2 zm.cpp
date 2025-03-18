#include <iostream>
using namespace std;

int main() {
    int liczby[5];

    cout << "WprowadŸ 5 liczb ca³kowitych: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> liczby[i];
    }

    for (int i = 0; i < 5; i++) {
        if (liczby[i] < 0) {
            liczby[i] = 0;
        }
    }

    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;

    return 0;
}

