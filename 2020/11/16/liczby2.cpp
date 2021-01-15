#include <iostream>

using namespace std;

int main(){
    int  naj[3];
    int zmiana;
    cin >> naj[0];
    cin >> naj[1];
    cin >> naj[2];

    // chcemy posortowac liczby tak zeby na koncu
    // naj[0] <= naj[1] <= naj[2]

    // najpierw ustawiamy na miejsce 0 najmniejsza liczbe
    if(naj[1]<=naj[0] && naj[1]<=naj[2]){
        // naj[1] jest najmniejsze - zamienimy naj[0] i naj[1] miejscami
        zmiana= naj[0];
        naj[0]=naj[1];
        naj[1]=zmiana;

    }else if(naj[2]<=naj[0] && naj[2]<=naj[1]){
        // naj[2] jest najmniesze zamienimy naj[0] i naj[2] miejscami
        zmiana= naj[2];
        naj[2]=naj[0];
        naj[0]=zmiana; 
    }

    // potem jesli dwie ostatnie liczby sa w zlej kolejnosci
    // to zamieniamy je miejscami

    if(naj[1]> naj[2]){
        zmiana= naj[1];
        naj[1]=naj[2];
        naj[2]=zmiana;
    }

    // mamy posortowana tablicę

    if(naj[0]==0){
        // najmniejsza jest zerem
        if(naj[1]==0){
            // dwie najmniejsze sa zerem
            cout << naj[2] << naj[0] << naj[1];
        } else {
            // tylko jedna jest zerem
            cout << naj[1] << naj[0] << naj[2];
        }
        
    } else {
        // zadna nie jest zerem
        cout << naj[0] << naj[1] << naj[2];
    }

   
    return 0;
}