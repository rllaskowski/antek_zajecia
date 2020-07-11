#include <iostream>

using namespace std;

/*
wynik = 24
liczba = 4
*/


int main() {
    int liczba;
    int wynik = 1;

    cin >> liczba;

    for (int i = 1; i <= liczba; i++) {
        wynik = wynik * i;
    }
    cout << wynik << endl;
    return 0;
}