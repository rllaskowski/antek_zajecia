#include <iostream>

using namespace std;

/*
5*3 = 5 + 5 + 5



liczba1 = 1+liczba/2


liczba = 100
liczba2 = 100 - 50 = 50

*/

int main() {
    int liczba;
    int liczba1 = 0;
    int liczba2 = 0;
    int x;

    cin >> liczba;

    liczba1 = 1+liczba/2;
    liczba2 = liczba-liczba/2;

    if(liczba1>liczba2){
        cout << liczba1 << endl; 
    } else {
        cout << liczba2 << endl;
    }

    return 0;
}