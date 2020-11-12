#include <iostream>

using namespace std;


void wypisz(int N,char nZ){
    for(int i=0; i<N; i++){
        cout << nZ;
    }
}
    
int main() {
    int  N;
    char nZ;
    cin >> N;
    cin >> nZ;

    wypisz(N,nZ);

    return 0;
}