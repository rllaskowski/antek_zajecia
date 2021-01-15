#include <iostream>

using namespace std;

/*
N M <- rozmiary planszy
potem cala plansza o rozmiarach N x M

x1 y1 <- wspolrzedne lewego gornego rogu prostokata
x2 y2 <- wspolrzedne prawego dolnego rogu prostokata

Przykład:
Wejscie:
4 4
6 1 2 1
2 1 8 2
7 5 0 1
4 1 2 6

2 3
4 4

Wyjscie:


n <= 300 , m <= 300

*/

int main() {
    int liczby[300][300];
    int n;
    int m;
    int x1; 
    int y1;
    int x2;
    int y2;
    int wynik=0;
    cin >> n;
    cin >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> liczby[i][j];

        }
    }
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    /*
    x1 to pierwszy wiersz, w którym jest nasz prostokąt
    y1 to pierwsza kolumna, w której jest nasz prostokąt

    x2 to ostatni wiersz w ktorym jest nasz prostokat
    y2 to ostatnia kolumna, w której jest nasz prostokąt
    */
    for(int i=x1; i<=x2; i++){
        // i jakims jest numerem wiersza na ktorym jest
        // nasz prostokat
        // przejdzmy sie tez po wszystkich kolumnach na ktorych jest
        // nasz prostokat na tym wierszu
        cout << "TERAZ BEDZIEMY DODAWAC WSZYSTKIE LICZBY Z WIERSZA O NUMERZE " << i << endl; 
        
        
        for(int j=y1; j<=y2; j++){
            cout << "TERAZ DODAJE DO WYNIKU LICZBE Z WIERSZA " << i << " Z KOLUMNY " << j << endl;
            // liczba na wierszu o numerze i
            // oraz na kolumnie o numerze j
            // jest w naszym prostokacie
            // dodajmy ją do wyniku
            wynik += liczby[i][j];
        }

    }

    cout << wynik << endl;
    


    return 0;
}