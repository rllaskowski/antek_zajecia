#include <iostream>

using namespace std;


int main() {
    int lB;
    int S;
    cin >> lB;

    for(int i = 0; i<lB; i++){
        cin >> S;
        
        cout << S/60 << endl;
    }

    return 0;
}