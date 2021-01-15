#include <iostream>

using namespace std;

int main() {
    int ile;
    int lNm=1; // najmniejsza niewypisana liczba 
    cin >> ile;
    int lNw=ile*ile; // najwieksza niewypisana liczba
    
    for(int i = 1; i<=ile; i++){
        // i jest numerem wiersza w ktorym jestesmy
        if(i%2==0){
            // jestesmy w wierszu o numerze parzystym
            // zgodnie z zasadmi bedziemy wypisywac na zmiane
            // najwieksza oraz najmniejsza liczbe
            for(int j = 1; j<=ile; j++) {
                if(j%2==0){
                    // to oznacza ze jestesmy w kolumnie
                    // o numerze parzystym - czyli wypisujemy
                    // najmniejsza liczbe
                    cout << lNm << " ";
                    lNm+=1;

                }else{
                    cout << lNw <<" ";
                    lNw-=1;
                }     
            }
        } else {
            for(int j=1; j<=ile; j++){
                if(j%2==0){
                    cout << lNw << " ";
                    lNw-=1;

                }else{
                    cout << lNm << " ";
                    lNm+=1;
                } 
            }
        }
        cout << endl;
        
    }
    
    

    return 0;
}