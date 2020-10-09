#include <iostream>

using namespace std;

/*
Gra rozgrywa się na planszy 3x3
Gra dwóch graczy: jeden krzyzyk a drugi kółko
Grę rozpoczyna gracz grajacy krzyzykiem

Gracz w swojej rundzie kladzie na puste pole krzyyk/kolko

Do zrobienia:
1) Moze - losowanie kto rozpoczyna grę
2) Wyswietlanie planszy
3) Interakacja z graczami


Plansza to tablica wielkosci 9, na ktorej trzymamy informacje czy dane pole jest
puste, czy jest na nim kolko/krzyzyk
*/


char plansza[9] = {'0', '1', '2', '3', '4', '5', '6', '7' , '8' };

/*
|x|x|o| 
|x|x|o|
|x|x|o|


|0|1|2|
|3|4|5|
|6|7|8|


|X|X|X|
|O|4|5|
|X|O|O|
*/
void wypiszPlansze(){
    for(int i = 0; i<9; i++){
        cout << "|";
        cout << plansza[i];

        if(i==2 || i==5 || i==8){
            cout <<"|";
            cout << endl; 
        }
    }
}

bool czyWygrana() {
    if (plansza[0] == plansza[1] && plansza[1] == plansza[2]) {
        return true;
    }
    if (plansza[3] == plansza[4] && plansza[4] == plansza[5]) {
        return true;
    }
    if (plansza[6] == plansza[7] && plansza[7] == plansza[8]) {
        return true;
    }
    if (plansza[0] == plansza[3] && plansza[3] == plansza[6]) {
        return true;
    }
    if (plansza[1] == plansza[4] && plansza[4] == plansza[7]) {
        return true;
    }
    if (plansza[2] == plansza[5] && plansza[5] == plansza[8]) {
        return true;
    }
    if (plansza[0] == plansza[4] && plansza[4] == plansza[8]) {
        return true;
    }
    if (plansza[2] == plansza[4] && plansza[4] == plansza[6]) {
        return true;
    }
}



int main() {
    int pole;

    for(int i =0; i<9; i++){
        wypiszPlansze();
        
        if(i%2 == 0){
            cout << "Teraz gracz X" << endl;
            cout << "Na jakim polu chcesz postawić X: ";       
        } else {
            cout << "Teraz gracz O" << endl;    
            cout << "Na jakim polu chcesz postawić O: ";
        }
        cin >> pole;
        
        while (pole > 8 || pole < 0 || plansza[pole] == 'X' || plansza[pole] == 'O') {
            cout << "To pole jest niepoprawne. Podaj jeszcze raz: ";
            cin >> pole;
        }
          
        if(i%2==0){
            plansza[pole] = 'X';
            
        }else{
            plansza[pole] = 'O';
        }

        if (czyWygrana() == true) {    
             if(i%2==0){
               cout << "Wygrał gracz X" << endl;
            }else{
               cout << "Wygrał gracz O" << endl;
            }
        
            return 0;
        }
    }

    cout << "Remis!" << endl;
   
    return 0;
}