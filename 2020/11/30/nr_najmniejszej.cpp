#include <iostream>

using namespace std;
int liczby[10];
int main(){
    for(int i=0; i<10; i++){
        cin >> liczby[i];

    }

    // w tej zmiennej pamietamy na jakim miejscu
    // jest aktualnie najmniejsza liczba
    int nrnaj = 0;

    for(int i=1; i<10; i++){
        if(liczby[i]<liczby[nrnaj]){
            nrnaj=i;
        }
    }

    cout << nrnaj+1 << endl;

    return 0;
}