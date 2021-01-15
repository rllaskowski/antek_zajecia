#include <iostream>

using namespace std;

int main() {
    int liczba;
    cin >> liczba;
    for(int i = 1; i<=liczba; i++){

        if(i%7 == 0){
            if (i % 11 == 0) {
                cout << "Wiwat"<< endl;
            } else {
                cout << "Hurra!"<< endl;
            }
        } else if(i%11 == 0){
            cout << "Super!" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}