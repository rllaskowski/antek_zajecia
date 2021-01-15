#include <iostream>

using namespace std;

int main() {
    int wynik=0;
    int ile;
    char znak;
    int plus=0;
    int minus=0;
    int pP=0;
    cin >> ile;
    for(int i=0; i<ile; i++){
        cin >> znak;
        if(znak=='+'){
            plus+=1;
        }else{
            //TRAFILISMY NA -
            if(wynik < plus+pP+minus) {
                wynik = plus+pP+minus;
            }
            minus = 1;
            pP=plus;
            plus=0;
            
        }
        
    }
    if(wynik < plus+pP+minus) {
        wynik = plus+pP+minus;
    }
    cout << wynik;
    return 0;
}