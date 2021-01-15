#include <iostream>

using namespace std;

int main(){
    int liczba;
    int iC=0;
    
    cin >> liczba;

    while(liczba > 0){
        liczba /= 10;
        iC++;
    }
    cout << iC;

    return 0;
}