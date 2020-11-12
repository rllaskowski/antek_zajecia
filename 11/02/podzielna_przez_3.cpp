#include <iostream>

using namespace std;

/*
3 6 9 12 15


Liczba jest podzielna przez 3 jesli suma jej cyfr
jest podzielna przez 3


784533

string n = "abcde";

*/#include <iostream>

using namespace std;


int main(){
    string n;
    cin >> n;

    if(n[n.size()-1] == '0' || n[n.size()-1] == '2' || n[n.size()-1] == '4' || n[n.size()-1] == '6' || n[n.size()-1] == '8'){
        cout << "TAK";
    } else {
        cout << "NIE";
    }

    return 0;
}

int main() {
    string n;
    int sumaCyfr = 0;

    cin >> n;
    
    for(int i=0; i<n.size(); i++){
        // bierzemy kod danej cyfry
        int kodZnaku = n[i]; 
       

        // poniewaz ten kod jest o 48
        // wiekszy od tej cyfry to odejmujemy 48
        kodZnaku -= 48;
        sumaCyfr = sumaCyfr + kodZnaku;
    }
    if(sumaCyfr%3==0){

        cout << "TAK";
    }else{

        cout << "NIE";
    }
    return 0;
}