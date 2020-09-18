#include <iostream>

using namespace std;


/*
Wejscie
Antek
AntekketnA

jajoojaj
jajo
jajoojaj

0123456
wiatrak

01234

012345

slowo[4] = 
*/
int main() {
    string slowo;
    cin >> slowo;
    cout << slowo;

    for(int i = slowo.size()-1; i>=0; i--) {
        cout << slowo[i];
    }

    
}