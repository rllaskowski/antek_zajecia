#include <iostream>

using namespace std;

bool kubki[3]; 
bool zmiana;

void ruchA() {
    // wykonuje ruch typu A
    zmiana = kubki[0];
    kubki[0] = kubki[1];
    kubki[1] = zmiana;
}


void ruchB(){
    // wykonuje ruch typu B
    zmiana = kubki[1];
    kubki[1] = kubki[2];
    kubki[2] = zmiana;
}

void ruchC(){
    // wykonuje ruch typu C
    zmiana = kubki[0];
    kubki[0] = kubki[2];
    kubki[2] = zmiana;
}


int main() {
    kubki[0] = true; // w kubku po lewej stronie jest kulka
    kubki[1] = false;
    kubki[2] = false;
    string ruchy;
    cin >> ruchy;

    for(int i = 0; i<ruchy.size(); i++){
        if(ruchy[i]=='A'){
            ruchA();
        }else if(ruchy[i]=='B'){
            ruchB();
        }else{
            ruchC();
        }
    }
    
    
    if(kubki[0]== true){
        cout << '1';
    }else if(kubki[1] == true){
        cout << '2';
    }else{
        cout << '3';
    }
    return 0;
}