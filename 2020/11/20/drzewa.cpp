#include <iostream>

using namespace std;
int wys[200000];// wysokosci drzewek

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> wys[i];
    }

    for(int i=1; i<=n; i++){
        // i jest numerem drzewka dla ktorego chcemy wypisac odp
        int nrDrzewka = i+1;
        // pierwsze drzewko po prawej stronie ma nr i+1
        while(nrDrzewka <= n && wys[nrDrzewka]<=wys[i]){
            // przesuwamy się w prawo
            nrDrzewka++;   
        }
        if(nrDrzewka== n+1){
            cout << 0 << " ";
        }else{
            cout << wys[nrDrzewka]<<" ";
        }
        
    }
    return 0;
}