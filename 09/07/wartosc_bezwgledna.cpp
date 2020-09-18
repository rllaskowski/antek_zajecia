#include <iostream>
using namespace std;

/*
25
-123

abs

Liczby naturalne:
*/


int wartoscBezw(int liczba) {
    if(liczba < 0){
        return liczba*(-1);
    }else{
        return liczba;
    }
}

int main() {
    int liczba;

    cin >> liczba;

    cout << wartoscBezw(liczba);

    return 0;
}