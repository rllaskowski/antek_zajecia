#include <iostream>

using namespace std;



/*
0: 0
1: 0
2: 1
3: 0
4: 3
5: 2
6: 0
2 5 4 4 5 4
*/

int main() {
    int n;
    cin >> n; 
    int ocena;
    int oceny[7];

    for(int i = 0; i<=6; i++) {
        oceny[i] = 0;
    }

    for(int i = 0; i<n; i++){
        cin >> ocena;
        
        oceny[ocena] += 1;
    }   
    
    for(int i = 1; i<7; i++)   {
        cout << oceny[i] << " ";
    } 
    

    return 0;
}