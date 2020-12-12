#include <iostream>

using namespace std;

int main() {
    int liczba;
    cin >> liczba;
    int suma=0;
    while(liczba > 0){
        //cout <<  liczba % 10;
        suma += liczba % 10;
        liczba = liczba /10;
    }
    
    cout << suma;
    return 0;
}