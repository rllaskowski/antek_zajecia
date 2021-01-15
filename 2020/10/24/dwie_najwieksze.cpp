#include <iostream>

using namespace std;


/*
pn = 16
dn = 13

14

*/
int main() {
    int liczba;
    int pn = 0;
    int dn = 0;

    while (1==1) {
        cin >> liczba;
        if(pn <= liczba){
            dn = pn;
            pn = liczba;
        }else if(dn < liczba){

            dn = liczba;
        }

        
        if(liczba==0) {
            break;
        }
    }

    cout << pn << " " << dn << endl;

    return 0;
}