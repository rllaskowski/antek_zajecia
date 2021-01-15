#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n*2; i++){
        for(int j=0; j<n*2; j++){

            if(i==0){
                // wypisujemy pole z pierwszego wiersza
                cout << '#';
            }else if(j==0){
                // wypisujemy pole z pierwszej kolumny
                cout << '#';
            }else if(i==n*2-1){
                // wypisujemy pole z ostatniego wiersza
                cout << '#';
            }else if(j==n*2-1){
                // wypisujemy pole z ostatniej kolumny
                cout << '#';
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}