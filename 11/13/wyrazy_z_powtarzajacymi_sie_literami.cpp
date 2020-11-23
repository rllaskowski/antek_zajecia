#include <iostream>

using namespace std;

int main(){
    string wyraz;
    cin >> wyraz;

    cout << wyraz[0];

    for(int wW=0; wW<wyraz.size()-1; wW++) {
        if(wyraz[wW] != wyraz[wW+1]){
            cout <<  wyraz[wW+1];
        }
    }

    return 0;
}