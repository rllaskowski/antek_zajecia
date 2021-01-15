#include <iostream>

using namespace std;

int main() {
    int r;
    int k;
    int l;
    int sW[51];
    cin >> r;
    for(int i=0; i<r; i++){
        sW[i]=0;
        for(int j=0; j<r; j++){
            cin >> k;
            sW[i] += k;
        }
        cout << sW[i] << endl;
    }
    
    return 0;
}