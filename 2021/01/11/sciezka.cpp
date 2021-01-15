#include <iostream>

using namespace std;

int main() {
    char pDS[300][300];
    int n; 
    int m;
    int pKW;
    int pKK;
    int cKW;
    int cKK;
    cin >> n;
    cin >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> pDS[i][j];
            if(pDS[i][j] == 'A') {
                // wczytalismy wlasnie pozycje krola
                // na wierszu i
                // oraz na kolumnie j
                pKW = i;
                pKK = j;

            }else if(pDS[i][j] == 'B'){
                // wczytalismy wlasnie cel krola
                // na wierszu i
                // oraz na kolumnie j
                cKW = i;
                cKK = j;
            }
        }
    }

    /*
    wiemy gdzie jest krol oraz gdzie jest jego cel
    sprobumy poruszac krolem w kierunku jego celu
    i robmy to dopoki krol nie bedzie na poprawnym miejscu
    */
   pDS[pKW][pKK]='#';
    
    while(pKW != cKW || pKK != cKK) {
        // to znaczy ze musimy jeszcze przesunac krola

        if (pKW > cKW){
            pKW -=1;
        }else if(pKW < cKW){
            pKW +=1;
        }

        if (pKK > cKK){
            pKK -=1;
        }else if(pKK < cKK){
            pKK +=1;
        }
        pDS[pKW][pKK] = '#';
    }
    
    /*
    Po tej petli nasz krol jest na dobrym miejscu
    Ustawilismy w naszej tablicy pDS sciezke naszego krola
    Wypiszmy cala zawartosc tablicy
    */
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << pDS[i][j];
        }
        cout << endl;
    }

    return 0;
}