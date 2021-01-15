#include <iostream>

using namespace std;

/*
n=4
   *
  ***
 *****
*******
   *
   *


i=0
n=5
    *
   ***
  *****
 *******
********* 
*/

void wypisz(int n, char znak) {
    for(int i = 0; i < n; i++){
        cout << znak;
    }
}


int main() {
    int n;
    cin >> n;

    int spacje = n-1;
    int gwiazdki = 1;
    for(int i = 0; i < n; i++){
        wypisz(spacje,' ');
        wypisz(gwiazdki,'*');
         
        gwiazdki += 2;
        spacje--;  
            
        cout << endl;
    } 
    wypisz(n-1,' ');
    cout << "*"<<endl;
    wypisz(n-1,' ');
    cout << "*"<<endl;
    return 0;
}