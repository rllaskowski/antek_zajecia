#include <iostream>

using namespace std;

int main() {
    string slowo;
    cin >> slowo;

    int krok=0;
    while (krok < slowo.size()){
        slowo.erase(krok,1);
        krok+=1;
    }
    cout << slowo;

    return 0;
}