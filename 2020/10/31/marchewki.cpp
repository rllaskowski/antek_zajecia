#include <iostream>

using namespace std;

int main() {
    int w;
    int wM;
    int nM = 0;
    cin >> w;
    
    for(int i = 0; i<w; i++){
        cin >> wM;
        if(wM>nM){
            nM = wM;
        }
    }
    cout << nM;
    return 0;
}