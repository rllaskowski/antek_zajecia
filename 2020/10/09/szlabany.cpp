#include <iostream>

using namespace std;

int main() {
    int szlabany;
    int czas = 1;
    int t;
    cin >> szlabany;
    
    for(int i=0; i<szlabany; i++) {
        
        cin >> t;
        cout << "Dotarlem do szlabanu po " << czas << " minutach, a on otwiera sie po " << t << " minutach" << endl; 
        if( czas < t){
            cout << "Wiec musze czekac!" << endl;
            czas = t;
        }
        cout << "Wychodze ze szlabanu po " << czas << " minutach" << endl;

        czas += 1;
    }
    cout << czas << endl;
    return 0;

}