#include <iostream>

using namespace std;


int main() {
    int iD; 
    int d[1000000]; //to
    int lN=0; //to 
    int lN1=0;
    int lN2=0;
    int lN3=0;
    int pole;
    int gdzie=0; // to
    cin >> iD;

    for(int i = 0; i<iD; i++){
        cin>> d[i];
        if(d[i] > lN){
            /* Czy ta deska jest dluzsza niz na razie najdluzsza?
            jesli jest to znalezlismy nową najdlusza deske
            zapamietujemu w zmiennej "gdzie" w ktorym ona byla miejscu
            oraz w zmiennej lN jaka byla jej dlugosc */
            lN=d[i];
            gdzie = i; 
        }
    }

    d[gdzie]=0;

    for(int i = 0; i<iD; i++){
        if(d[i] > lN1){
            lN1=d[i];
            gdzie = i;
        }
    }
    d[gdzie]=0;
    for(int i = 0; i<iD; i++){

        if(d[i] > lN2){
            lN2=d[i];
            gdzie = i;
        }
    }
    d[gdzie]=0;
    for(int i = 0; i<iD; i++){

        if(d[i] > lN3){
            lN3=d[i];
            gdzie = i;
        }
    }
    d[gdzie]=0;

    pole=lN3*lN3;
    cout << pole;
    return 0;
}