#include <iostream>

using namespace std;

int main(){
    int tablica[200];
    int l;
    int ilePodzielnych = 0;
    cin >> l;

    for(int i = 0; i < l; i++){
        cin >> tablica[i];

        if(tablica[i] % 4 == 0) {
            ilePodzielnych++;
        }
    }

    int ileWypisalem = 0;
    for(int i =0 ; i < l; i++){
        if (tablica[i] % 4 == 0){
            cout << tablica[i];
            ileWypisalem++;
            if(ileWypisalem < ilePodzielnych){
                cout << ";";
            }

        }
        
    }

    return 0;
}