#include <iostream>

using namespace std;

/*
bool - prawda/falsz true/false
int  - liczba calkowita
string - napis
char - jeden znak
*/

bool podzielna2(string n){
    // zwraca true 
    if(n[n.size()-1] == '0' || n[n.size()-1] == '2' || n[n.size()-1] == '4' || n[n.size()-1] == '6' || n[n.size()-1] == '8'){
        return true;
    } else {
        return false;
    }
}

bool podzielna3(string n){
    int sumaCyfr = 0;

    for(int i=0; i<n.size(); i++){
        // bierzemy kod danej cyfry
        int kodZnaku = n[i]; 
        
        // poniewaz ten kod jest o 48
        // wiekszy od tej cyfry to odejmujemy 48
        kodZnaku -= 48;
        sumaCyfr = sumaCyfr + kodZnaku;
    }

    if(sumaCyfr%3==0){
        return true;
    }else{
        return false;
    }
}


int main(){
    string n;
    cin >> n;

    if (podzielna2(n) == true && podzielna3(n) == true) {
        cout << "Liczba jest podzielna przez 6" << endl;
    } else {
        cout << "Liczba nie jest podzielna przez 6" << endl;
    }
    
    return 0;
}

/*

 

*/