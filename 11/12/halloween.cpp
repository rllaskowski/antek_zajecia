#include <iostream>

using namespace std;

int main() {
    int t;
    int n;
    cin >> t;
    cin>> n;
    int iC[1000000];
    int suma = 0;

    for(int i=1; i<=n; i++){
        cin >> iC[i];
    }

    int x, y;
  
    for(int i=0; i<t; i++){
        // Dzieci zbieraja cukierki zaczynajac od domu
        // o numerze x, a konczac na domu o numerze y
        // wypiszmy ile cukierkow zbiorą
        cin >> x >> y;

        // przejdzmy kolejną petlą po wszystkich domach
        // zaczynajac na domu o numerze x
        // i konczac na y
        // oraz sumujmy cukierki znajdujące się w napotkanych domach
        
        for(int d=x; d<=y; d++){
            // dzieci są na domku o numerze d
            // dodajmy do zmiennej suma ilosc cukierkow
            // w domu o numerze d
            suma += iC[d];
           
        } 
        cout << suma << endl;
        suma = 0;
    }
    
    
    return 0;
}