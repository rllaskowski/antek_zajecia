#include <iostream>

using namespace std;

int main() {
    int liczba;
    
    int wynik = 0;
    cin >> liczba;
    
    for(int i = 0; i<5; i++){
        cout << "DODAJE liczbe " << liczba << endl;
        wynik = wynik + liczba; 
        liczba += 2;
    }

    cout << wynik << endl;
    return 0;
}