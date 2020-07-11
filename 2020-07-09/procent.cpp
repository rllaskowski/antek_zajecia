#include <iostream>

using namespace std;

/*
Jak zamieniamy procent na ułamek?

Przykłady 
75% = 75/100 = 3/4
50% = 50/100 = 1/2
*/

int main() {
    int procent;
    cin >> procent;

    /* znajdzmy najwieksza liczbe taka, ze dzieli 
    wczytana liczbe oraz 100 */
    int dzielnik = 1;
    for (int i = 1; i <= procent; i++) {
        // czy "i" dzieli "procent" oraz 100
        if (procent % i == 0 && 100 % i == 0) {
            dzielnik = i;
        }
    }
     
    cout << procent/dzielnik << "/"  << 100/dzielnik << endl;

    return 0;
}