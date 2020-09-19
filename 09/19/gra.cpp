#include <iostream>

using namespace std;


/*
OPIS GRY
uzytkownik podaje nam swoj nick

nastepnie wybiera swoja klase z jednej 3 mozliwych
-krasnoludy
-orkowie
-ludzie
*/

int main() {
    string  nick;
    string  klasa;
    string wybor;

    int zycie;
    int atak;
    int magia; 
    int poziom = 1;
    int zyciePodstawowe;
    
    cout << "Napisz swoje Imie: ";
    cin >> nick;

    cout << "Wybierz swoja klase spośród: Krasnoludy, Orkowie, Ludzie: ";
    cin >> klasa; 
    

    if (klasa == "Krasnoludy"){
        zyciePodstawowe = 80;
        zycie = 80;
        atak = 25;
        magia = 40;

    } else if (klasa == "Orkowie"){
        zyciePodstawowe = 100;
        zycie = 100;
        atak = 20;
        magia = 10;
    } else if (klasa == "Ludzie"){
        zyciePodstawowe = 75;
        zycie = 75;
        atak = 20;
        magia = 25;

    } else {
        cout <<"Nie ma takiej klasy";
        return 0;
    }

    while(zycie>0){
        cout << "POZIOM " << poziom << endl;
        
        int atakP = 30+poziom*5;
        int magiaP = 10+poziom*1;
        int zycieP = 40+poziom*5;

        /* zaczynamy walke, ktora toczy sie
        dopoki obaj gracze maja wiecej niz 0 zycia */        
        while(zycieP > 0 && zycie > 0){
            cout << "Masz " << zycie << " życia" << endl;
            cout << "Przeciwnik ma " << zycieP << " życia" << endl;
            
            cout << "Wybierz Atak albo Magie ";
            cin >> wybor;
           

            if(wybor == "Atak"){
                zycieP = zycieP - atak;
            }else if(wybor == "Magia"){
                zycieP = zycieP - magia;
            }else{
                cout << "Nie wykonujesz żadnego ruchu" << endl;
            }
    
            if (rand() % 2 == 0) {
                // przeciwnik atakuje 
                cout << "Przeciwnik zaatakowal!" << endl;
                zycie = zycie - atakP;
            } else {
                // przecwnik uzywa magii
                cout << "Przeciwnik uzywa magii!" << endl;
                zycie = zycie - magiaP;
            }
        }
        if(zycieP <= 0){
            poziom = poziom + 1;
            cout << "Wygrałeś! Przechodzisz na Poziom " << poziom << endl;
            zycie = zyciePodstawowe;

            
        }else{
            cout << "Przegrałeś. Przeciwnik Wygrał" << endl;
        }
    }
    
    
    return 0;
}