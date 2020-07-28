#include <iostream>

using namespace std;

/*
kajaaajak

cabbac
bbbba
ana


int char string bool void

8

0 7 i = 0
1 6 i = 1
2 5 i = 2
3 4 i = 3

0 1 2 3 4 5 6 7 
*/

bool czyPalindrom(string napis) {
    for(int i = 0; i<napis.size()/2; i++){
        if(napis[i] != napis[napis.size()-1-i]) {
            return false;    
        }
    }
    return true;
}

int main() {
    string napis; 
    cin >> napis;
    
    if(czyPalindrom(napis) == true){
        cout << "Slowo jest palindromem";
    }else{
        cout << "Slowo nie jest palindromem";
        
    }
}