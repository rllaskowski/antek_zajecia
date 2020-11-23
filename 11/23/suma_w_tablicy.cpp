#include <iostream>


using namespace std;

int main() {
    int lw; 
    int lk;
    int liczba;
    int suma=0;
    cin >> lw;
    cin >> lk;

    for (int j = 0; j < lw; j++){
        for(int i=0; i < lk; i++){
            cin >> liczba;
            suma += liczba;
        }
    }
    cout << suma;
    return 0;
}