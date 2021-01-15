#include <iostream>

using namespace std;




int main(){
    int w;
    int s;
    int liczbaPrezentow;
    int aRozmiar;
    int bRozmiar;
    int cRozmiar;
    int a, b;
    int np = 0;
    cin >>  w;
    cin >>  s;
    cin >> liczbaPrezentow;

    for(int i=0; i<liczbaPrezentow; i++){
        cin >> aRozmiar >> bRozmiar >> cRozmiar;

        if(aRozmiar<bRozmiar && aRozmiar<cRozmiar ){
            // aRozmiar jest najmniejsza
            
            a = aRozmiar;

            if(bRozmiar < cRozmiar){
                // bRozmiar jest druga najmniejsza
                // aRozmiar < bRozmiar < cRozmiar
                b = bRozmiar;
            } else {
                // cRozmiar jest druga najmniejsza
                // aRozmiar < cRozmiar < bRozmiar
                b = cRozmiar;
            }

        } else if(bRozmiar<aRozmiar && bRozmiar<cRozmiar){
            // bRozmiar jest najmniejsza
            a = bRozmiar;
            if(cRozmiar < aRozmiar){
                // cRozmiar jest druga najmniejsza
                // bRozmiar < cRozmiar < aRozmiar
                b = cRozmiar;
            } else {
                // a jest druga najmniejsza
                // bRozmiar < aRozmiar < cRozmiar
                b = aRozmiar;
            }
            
        }else {
            a = cRozmiar;

             if(aRozmiar < bRozmiar){
                // cRozmiar < aRozmiar < bRozmiar
                b = aRozmiar;
            } else {
                // a jest druga najmniejsza
                // cRozmiar < bRozmiar < aRozmiar
                b = bRozmiar;
            }
        }

        if(a <= w && b <= s){
            cout << "Tak" << endl;
        }else if(a <= s && b <= w){
            cout << "Tak" << endl;
        }else{
            cout << "Nie" << endl;
            np += 1;
            
        }
    }
    cout << np;
   

    return 0;
}
