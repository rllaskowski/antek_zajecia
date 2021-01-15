#include <iostream>

using namespace std;

/*
5

12345
7...6
6...7
5...8
43219


12345
70006
60007
50008
43219

12345
00006
00007
00008
00009

n <= 20
*/

int main() {
    int plansza[20][20];
    int n;
    int liczba = 1;
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j <n; j++) {
            plansza[i][j] = 0;
        }
    }


    // ustawianie liczb na pierwszym wierszu
    for(int i=0; i<n; i++) {
        // chcemy ustawic liczby
        // na pierwszym wierszu naszej tablicy
        // i jest numerem kolumny na ktorej ustawiamy liczbe
        plansza[0][i] = liczba;
        liczba++; 
        if(liczba > 9){
            liczba = 1;
        }
    }

    for(int i=1; i<n; i++) {
        // zmieniaja sie numery wierszy
        // ale kolumna jest ciagle taka sama
        plansza[i][n-1]=liczba;
        liczba ++;
        if(liczba > 9){
            liczba = 1;
        }
    }

    
  
    for(int i=n-1; i>=0; i--) {
        // zmieniaja sie numery wierszy
        // ale kolumna jest ciagle taka sama
        plansza[n-1][i]=liczba;
        liczba ++;
        if(liczba > 9){
            liczba = 1;
        }
    }



    for(int i=n-2; i>=1; i--) {
        // zmieniaja sie numery wierszy
        // ale kolumna jest ciagle taka sama
        plansza[i][0]=liczba;
        liczba ++;
        if(liczba > 9){
            liczba = 1;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j <n; j++) {
            cout << plansza[i][j];
        }
        cout << endl;
    }
    


    return 0;
}