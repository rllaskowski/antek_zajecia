#include <iostream>

using namespace std;



/*

PODZIELNOSC PRZEZ 2:
jesli ostatnia cyfra jest parzysta - 0,2,4,6,8
PODZIELNOSC PRZEZ 5
jesli ostatnia cyfra jest 0 lub 5
PODZIELNOSC PRZEZ 10
jesli ostatnia cyfra to 0
PODZIELNOSC PRZEZ 100
dwie ostatnie cyfry to 0


01234567
ABCDEFGH
*/


int main(){
    string n;
    cin >> n;


    if(n.size() >= 3 &&n[n.size()-1] == '0' && n[n.size()-2] == '0' ){
        cout << "TAK";

    }else{

        cout << "NIE";
    }

    return 0;
}#include <iostream>

using namespace std;



/*

PODZIELNOSC PRZEZ 2:
jesli ostatnia cyfra jest parzysta - 0,2,4,6,8
PODZIELNOSC PRZEZ 5
jesli ostatnia cyfra jest 0 lub 5
PODZIELNOSC PRZEZ 10
jesli ostatnia cyfra to 0
PODZIELNOSC PRZEZ 100
dwie ostatnie cyfry to 0


01234567
ABCDEFGH
*/


int main(){
    string n;
    cin >> n;

    
    if(n.size() >= 3 &&n[n.size()-1] == '0' && n[n.size()-2] == '0' ){
        cout << "TAK";

    }else{

        cout << "NIE";
    }

    return 0;
}