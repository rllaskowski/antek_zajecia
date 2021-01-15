#include <iostream>

using namespace std;

int main() {
    int liczba;
    cin >> liczba;

    for(int i = 0;  i<liczba; i++){
       cout << "-";
    }
     cout << "+";
    for(int i = 0;  i<liczba; i++){
       cout << "-";
    }
    cout << endl;
    return 0;
}