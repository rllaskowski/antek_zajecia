#include <iostream>

using namespace std;

    
int main() {
    string napis;
    int suma = 0;
    cin >> napis;

    for(int i=0; i<napis.size(); i++) {
        int kodLiterki = napis[i]-64;
        suma += kodLiterki;
    }
    cout << suma << endl;;
    return 0;
}