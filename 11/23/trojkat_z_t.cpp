#include <iostream>


using namespace std;

/*
TTTT
TTT
TT
T
TT
TTT
TTTT

*/
int main() {
    int h;
    cin >> h;
    int ileT=h;
    for(int i=0; i<h; i++){
        for(int j=0; j<ileT; j++ ){
            cout << 'T' ;
        }
        cout << endl;
        ileT--;
    }
    ileT=2;
    for(int i=0; i<h-1; i++){
        for(int j=0; j<ileT; j++ ){
            cout << 'T';
        }
        cout << endl;
        ileT++;
        
    }
    return 0;
}