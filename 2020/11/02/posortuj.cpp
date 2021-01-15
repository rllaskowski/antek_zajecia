#include <iostream>


using namespace std;

/*
4

6 8 1 9 

Biore po kolei karty od lewej strony do prawej
i przekladam je najdalej na lewo jak sie da
*/

int main() {
    int a = 10;
    int b = 4;

    a = b;
    b = a; 
    

    cout << a << " " << b << endl;


    int liczba[10];
    int ile;
    int p=0;
    cin >> ile;


    for(int i=0; i<ile; i++){
        cin >> liczba[i];
    }
    
    
    for(int i=0; i<ile; i++) {
        // chce przelozyc karte o numerze i 
        // najdalej w lewo

        int nrKarty = i;

        while (liczba[nrKarty-1] > liczba[nrKarty]) {
            // to chce zamienic te karty

        }

    }
    

    return 0;
}