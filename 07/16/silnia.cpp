#include <iostream>

using namespace std;

/*
10! = 
5! = 1*2*3*4*5=120
3! = 1*2*3= 6
*/

int silnia(int liczba){
    int wynik = 1;
    for (int i = 1; i <= liczba; i++) {
        wynik = wynik * i;   
    }
    return wynik;
}

int main() {
    int liczba;
    cin >> liczba;
    cout << silnia(liczba);
    

}