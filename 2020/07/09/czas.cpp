#include <iostream>

using namespace std;

/*
4000
1g6m40s

4000/3600 = 1 400reszty
*/

int main() {
    int sekundy;
    cin >> sekundy;

    // jedna godzina ma 3600sekund
    int godziny = sekundy/3600;
    int minuty = (sekundy%3600)/60;
    int sek = sekundy%60;

    cout << godziny << "g" << minuty << "m" << sek << "s" << endl;


    if (godziny < 3) {
        cout << "Długo to trwa";
    } else if (godziny == 2) {
        cout << "Srednio dlugo";
    } else if (godziny == 1){
        cout << "Mało to trwa";
    }
    return 0;
}