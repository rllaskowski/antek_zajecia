#include <iostream>

using namespace std;

/*
10 5 15
*/
int main() {
    int liczba1;
    int liczba2;
    int liczba3;
    cin >> liczba1 >> liczba2 >> liczba3;

    if (liczba1 >= liczba2 && liczba1 >= liczba3) {
        cout << liczba1 << " ";
    } else if (liczba2 >= liczba1 && liczba2 >= liczba3 ){
        cout << liczba2 << " ";
    } else{
        cout << liczba3 << " ";
    }

     if (liczba1 <= liczba2 && liczba1 <= liczba3) {
        cout << liczba1 << endl;
    } else if (liczba2 <= liczba1 && liczba2 <= liczba3 ){
        cout << liczba2 << endl;
    } else{
        cout << liczba3 << endl;
    }


    return 0;
}