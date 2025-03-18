#include <iostream>
using namespace std;

int main() {
    int licznik = 0;

    for (int i = 100; i <= 999; i++) {
        int d1 = i / 100;        
        int d2 = (i / 10) % 10;  
        int d3 = i % 10;         

        if (d1 != d2 && d1 != d3 && d2 != d3) {
            cout << i << endl;
            licznik++;
        }
    }

    cout << "Liczb bez powtarzaj¹cych siê cyfr: " << licznik << endl;

    return 0;
}

