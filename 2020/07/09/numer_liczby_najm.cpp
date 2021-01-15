#include <iostream>

using namespace std;

/*
wynik = 2

11
7
70
9
11
23
2
8
3
19

*/
int main() {
    int x;
    int wynik = 10000000;
    
    for (int i = 0; i < 10; i++){
        cin >> x;

        if(x < wynik){
            wynik = x;
        }
    }

    cout << wynik << endl;

    return 0;
}