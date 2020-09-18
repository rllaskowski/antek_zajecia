#include <iostream>


using namespace std;

/*
Przyjmuje luczbe i zwraca te liczba podniesiona do kwadratu

5 -> 5^2 = 25
6 -> 6^2 = 36  

5^2 = 25

2^10 = 1024

3^3 = 3*3*3 = 27

*/

int doDrugiej(int liczba){
    /* przyjmuje jedną liczbę i zwraca ją w drugiej potędze */
    return liczba*liczba;
}

/*
5 3
wynik = 1
wynik *= 5 // wynik = 5
wynik *= 5 // wynik = 25
wynik * 5  // wynik = 125

poteguj(2,5) - czyli chcemy obliczyc 2 do potegi 5

wynik = 32
2^5
*/

int poteguj(int podstawa, int wykladnik) {
    int wynik = 1;
    for(int i = 0; i < wykladnik; i++){
        wynik *= podstawa;
    }
    return wynik;
}

int main() {
    int a;
    int b;

    cin >> a >> b;

    cout << poteguj(a, b) << endl;
    return 0;
}