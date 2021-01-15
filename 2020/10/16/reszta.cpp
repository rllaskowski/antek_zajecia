#include <iostream>


using namespace std;


int main(){ 
    int testy;
    int tekst2;
    int tekst3;
    int tekst4;
    int cR; // cena roweru
    int pJ; // pieniadze janka
    int jeden;
    int dwa;
    int piatki;
    int reszta;
    int wM;
    int wynik;
    cin >> testy;

    for(int i = 0; i < testy; i++){
        // WCZYTUJEMY LICZBY Z TESTU
        // NAJPIERW CENA ROWERU POTEM PIENIADZE JASIA
        cin >> cR;
        cin >> pJ;
        if(pJ>=cR){
            reszta = pJ - cR;
            piatki = reszta/5;
            reszta -= piatki*5;
            if(reszta >= 2){
                dwa = reszta/2;
                reszta-= dwa*2;
            }else{
                dwa = 0;
            }
            if(reszta == 1){
                jeden = 1;
                
            }else{

                jeden = 0;
            }
            wynik = jeden + dwa + piatki;
            cout << wynik << endl;
        } else {
            cout << "Jaś nie Kupi Rowera.Bo ma za mało pieniedzy" << endl;
        }
    }

    return 0;
}