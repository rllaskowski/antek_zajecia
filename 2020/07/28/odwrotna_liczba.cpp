/*
2^4 = 2*2*2*2


10^1 = 10
10^2 = 100
10^3 = 1000 tysiac
10^4 = 10000 10 tysiecy
10^5 = 100000 100 tysiecy 
10^6 = 1000000 milion
..
10^200 = 100000.000..000

2000000000


*/
#include <iostream>

using namespace std;

/*

string napis = "Antek";

Agata
atagA

12345
54321

i = 5-1 = 4
i=
*/
int main() {
    string liczba;

    cin >> liczba;

    for(int i = liczba.size()-1; i >= 0; i--) {
        cout << liczba[i];
    }

    cout << endl;

    return 0;
}