 #include <iostream>

using namespace std;

int kubelki[101];
int liczby[101];

/*
2 5 2 6 1 2

0: 0
1: 1
2: 3
..
...
5: 1
6: 1
..
..

100: 0

*/
int main() {
    int n;

    int liczba;
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> liczby[i];
    }

    for(int j=0;j<n; j++){
        // wypisujemuy ile razy zostala wczesniej
        // wczytana liczba o tej samej wartosci co i
        kubelki[liczby[j]] += 1;
    }
    
    for(int j=1; j<=9; j++){
        for(int i=0; i<kubelki[j]; i++){
            cout << j << " ";
        }
    }


    return 0;
}