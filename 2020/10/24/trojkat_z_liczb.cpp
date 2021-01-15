#include <iostream>

using namespace std;


/*
n

12345678901234567

n
*/
int main() {
    int n;
    int cyfra = 1;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cyfra = 1;

        for(int j = 0; j<=i; j++){
            // ta petla wypisuje wszystkie cyfry z wiersza naszego trojkata
            // wypisze ona dokladnie i cyferek 
            cout << cyfra;
            
            cyfra += 1;
            if(cyfra == 10){
                cyfra = 0;
            }
        }
        // wypisalismy caly wiersz
        cout << endl;
    }

    return 0;
}