  #include <iostream>

using namespace std;

/*
wypisz(4, 'A')

*/

void wypisz(int N, char nZ){
    // ma wypisac N razy znaczek nZ
    for(int j=0; j<N; j++){
        cout << nZ;
    }
}

int main() {
    int  N;
    // wczytac ile bedzie znakow - N  YES
    cin >> N;
    
    char nZ[N];
    
    for(int i=0; i<N; i++){
        // wczytujemy kazdy znak
        cin >> nZ[i];
    }
    
    for(int i = 0; i<N; i++){
        wypisz(i+1,nZ[i]);
        cout << endl;
    }


    return 0;
}