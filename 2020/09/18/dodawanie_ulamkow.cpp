#include <iostream>

using namespace std;

int main() {
    int l1;
    int m1;
    int l2;
    int m2;

    cin >> l1 >> m1 >> l2 >> m2;

    int m = m1*m2;
    l1 = l1*m2; 
    l2 = l2* m1;

    int l = l1 + l2;
    cout << l << "/" << m << endl;

    int nwd;

    for(int i = 1; i <= m; i++ ) {

        //chcemy sprawdzic czy zmienna i
        // dzieli licznik oraz mianownik
        // czyli jest wspolnym dzielnikiem licznika i mianownika
        if(l%i == 0 && m%i == 0 ){
            // znalezlismy wspolny dzielnik
            nwd = i;
            cout << i << " dzieli " << l <<" oraz " << m << " wiec jest wspolnym dzielnikiem" << endl; 
        } else {
            cout << i << " nie dzieli rownoczesnie licznika i mianownika" << endl;
        }
    }

    // po petli mamy obliczony najwiekszy wspolny dzielnik w zmiennej nwd

    l = l/nwd;
    m = m/nwd;

    if (l%m == 0) {
        cout << l/m << endl;
    } else {
        cout << l << "/" << m << endl;
    }

    return 0;
}