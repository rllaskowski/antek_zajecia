#include <iostream>

using namespace std;

/*
string - napis
int - liczba calkowita
char - znak 

string napis = "n";
char znak = 'a';


i=0 
A
i=1
AAA
i=2
AAAAA
i=3
AAAAAAA


i=0 h= 5
.... h-1-0
i=1
... h-1-1
i=2
.. h-1-2
i=3
. h-1-3
i = 4
h-1-4

h-1-i

h=7
i=0
...... h-1-0 = 6
i=1
..... h-1-1 = 5
i=2
.... h-1-2 = 4

*/
void wypisz(char znak, int n){
    for(int i = 0; i<n; i++){
        cout << znak;
    }
}


int main() {
    int h;
    cin >> h;
    
    int kropki = h-1;
    int ileA = 1;

    for(int i = 0; i<h; i++){
        wypisz('.', kropki);
        wypisz('A', ileA);
        cout << endl;

        kropki--;
        ileA += 2;
    }
    wypisz('.',h-2);
    cout << "HHH" << endl;
    return 0;
}