#include <iostream>

using namespace std;


/*
5
H   H
H   H
HHHHH
H   H
H   H


d=5
i=3
+++
*/

void wypiszRamie(int d){
    cout << "H";

    for(int i = 0; i<d-2; i++){
        cout << " ";
    }
    cout << "H"<< endl;   
}

void wypiszSrodek(int d){
    for(int i = 0; i<d; i++){
        cout << "H";      
    }
    cout << endl;
}

int main() {
    int d;
    cin >> d;
    for(int i = 0; i<d/2; i++){
        wypiszRamie(d);
    }
    wypiszSrodek(d);
    
    for(int i = 0; i<d/2; i++){
        wypiszRamie(d);
    }
    return 0;
}