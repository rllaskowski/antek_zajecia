#include <iostream>

using namespace std;

int ileOtworzy(int n, int d) {
    // n to ilosc klatek
    // d to dlugosc skoku malpki
    bool czyOtwarta[n+1];
    int pozycja=1;
    int wynik = 0;
    // nie mozemy zalozyc ze w naszej tablicy
    // wszedzie są wartosci false   
    // musimy te tablice pętlą wypelnic wartosciami false
    for(int i=1; i<=n; i++) {
        // zaznaczamy ze klatka nie jest otwarta
        czyOtwarta[i] = false;
    } 
    
    // teraz malpka bedzie skakac po klatkach
    // malpka zatrzymuje się, gdy wskoczy na klatkę
    // na ktorej juz byla
    while(czyOtwarta[pozycja]== false){
        czyOtwarta[pozycja] = true;
        wynik++;
        pozycja+=d;

        if(pozycja>n){
            pozycja-=n;
        }
    }
   
    return wynik;
}

int main(){
    int p;
    int d;
    int n;
    cin >> p;


    for(int i = 0; i<p; i++){
        cin >> n;
        cin >> d;
        cout << ileOtworzy(n,d) << endl;
    }

    return 0;
}