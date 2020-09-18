#include <iostream>

using namespace std;

/*
n = 
A
B
C
D
E


'a' = 97

'0' = 48

'A' = 65
'B' = 66
'C' = 67
..

*/
int main() {
    int n;
    cin >> n;

    char literka = 'A';
    int ileWypisac = 1;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<ileWypisac; j++){
            cout << literka;
        }
        cout << endl;
        literka += 1;
        ileWypisac += 1;
    }
    cout << endl;
    return 0;
}