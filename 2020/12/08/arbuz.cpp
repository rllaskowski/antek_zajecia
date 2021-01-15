#include <iostream>

using namespace std;

int main() {
    int n;
    char literka;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> literka;
        if(literka=='a'){
            cout << 'A';
        }else if(literka=='r'){
            cout << 'R';
        }else if(literka=='b'){
            cout << 'B';
        }else if(literka=='u'){
            cout << 'U';
        }else if(literka=='z'){
            cout << 'Z';
        }else{
            cout << literka;
        }
    
        

    }
}