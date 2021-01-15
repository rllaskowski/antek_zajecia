#include <iostream>

using namespace std;

int przepis[1000000];
int sJ[1000000];

int main() {
    int lS; // liczba skladnikow
    int pS = 0;
    cin >> lS;
    for(int i = 0; i<lS; i++){
        cin >> przepis[i];
    }
    
    for(int i = 0; i<lS; i++){
        cin >> sJ[i];
    }
    
    for(int i = 0; i<lS; i++){

        if(sJ[i]<przepis[i]){
            pS+=1;
        }
    }
    cout << pS << endl;
    
    return 0;
}