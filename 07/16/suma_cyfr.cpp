#include <iostream>
using namespace std;

/*
0
suma = 6+9+2
*/

int sumaCyfr(int liczba){
    int suma = 0;

    while (liczba > 0) {
        suma += liczba % 10;
        liczba = liczba / 10;
    }

    return suma;
}


int main() {
    int liczba;
    cin >> liczba;
    cout << sumaCyfr(liczba);
}