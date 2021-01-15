#include <iostream>

using namespace std;

bool czyPalindrom(string napis){
    //chcemy sprawdzic czy napis jest palindromem

    int doPary = napis.size()-1;
    for(int i=0; i<napis.size(); i++){
        // jezeli literka na pozycji i
        // nie jest taka sama jak literka do jej pary
        if(napis[i] != napis[doPary]) {
            return false;
        }
        doPary--;
    }
    return true;
}


int main() {
    string napis;

    while(1==1) {
        cin >> napis;

        if(napis=="**"){
            break;
        }
        if(czyPalindrom(napis) == true){
            cout << "TAK" << endl;
        }else{

            cout << "NIE" << endl;
        }
    }
    return 0;
}