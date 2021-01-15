#include <iostream>

using namespace std;

/*
BBBCBBC
BBBBBCC

*/

int main() {
    int ile;
    int b=0;
    int c=0;
    string  bLC;
    cin >> ile;
    cin >> bLC;
    
    for(int i = 0; i<ile; i++){
        
        if(bLC[i]=='C'){
            c+=1;
        }else{
            b+=1;
        }
        
    }
    
    for(int i=0; i<b; i++){

        cout << 'B';
    }
    
    for(int i=0; i<c; i++){

        cout << 'C';
    }

    return 0;
}