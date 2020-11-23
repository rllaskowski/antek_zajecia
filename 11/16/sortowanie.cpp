#include <iostream>

using namespace std;

int kubelki[101];


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
        cin >> liczba;
        kubelki[liczba]++;
    }

    for(int i=0;i<=100; i++){
        // wypisujemuy ile razy zostala wczesniej
        // wczytana liczba o tej samej wartosci co i
        
    }
    
    return 0;
}