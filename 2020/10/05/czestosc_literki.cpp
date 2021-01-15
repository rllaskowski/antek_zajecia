#include <iostream>


using namespace std;

/*
6
5 7 4 3 2 5 

ileRazy[10]
0:0
1:0
2:1
3:1
4:1
5:2
6:0
7:1
8:0
9:0

*/
int ileRazy[10];

int main() {
    int ileLiczb;
    int liczba;
   
    cin >> ileLiczb;

    for(int i = 0; i<ileLiczb; i++){
        cin >> liczba;
        ileRazy[liczba] += 1;
    }
    for(int i = 0; i<10; i ++){

        cout << i << ':' << ileRazy[i] << endl;
    }
    
    return 0;
}