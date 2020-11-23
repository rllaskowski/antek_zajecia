#include <iostream>

using namespace std;

/*
1 2  3  4 
2 4  6  8 
3 6  9 12
4 8 12 16

   1
  
*/
int main() {
    int k;
    cin >> k;
    
    for(int j=1; j<=k; j++){
        // j to numer wiersza
        for(int i=1; i<=k; i++) {
            // i to numer kolumny
            
            if(i*j<10){
                // to znaczy ze ta liczba ma 1 cyfre
                // wypisujemy 3 spacje i  te liczbe
                cout << "   " << i*j;
            }else if(i*j<100){
                // to znaczy ze ta liczba ma 2 cyfry
                // wypisujemy 2 spacje i  te liczbe
                cout << "  " << i*j;
            }else{
                // to znaczy ze ta liczba ma 3 cyfry
                // wypisujemy 1 spacje i  te liczbe
                cout << " " << i*j;
            }
        }
        cout << endl;
    }
    return 0;
}