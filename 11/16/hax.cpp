#include <iostream>

using namespace std;

/*
a -> 4
e -> 3
i -> 1
o -> 0
s -> 5
*/

int main() {
    string napis;
    cin >> napis;
    
    for(int i = 0; i<napis.size(); i++){
        if (napis[i]=='a') {
            napis[i] = '4';
        } else if(napis[i]=='e'){
            napis[i] = '3';
        }else if(napis[i]=='i'){
            napis[i] = '1';
        }else if(napis[i]=='o'){
            napis[i] = '0';
        }else if(napis[i]=='s'){
            napis[i] = '5';
        }
    }

    cout << napis;


    return 0;
}