#include <iostream>

using namespace std;

int main() {
    int r;
    int k;
    int l;
    int sK[51];
    cin >> r;

  
    for(int j=0; j<r; j++){
       sK[j] = 0;
    }

    for(int i=0; i<r; i++){
        
        for(int j=0; j<r; j++){
            cin >> k;
            sK[j] += k;  
        }
    }
    
    for(int j=0; j<r; j++){
        cout << sK[j] << endl;

    }

    return 0;
}