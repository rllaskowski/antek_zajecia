/*
11
0 2 4 6 8 10
*/

#include <iostream>

using namespace std;

int main() {
    int liczba;
    
    cin >> liczba;
    
    for (int i = 0; i <= liczba; i += 2) {
        cout << i << endl;
    }
    return 0;
}