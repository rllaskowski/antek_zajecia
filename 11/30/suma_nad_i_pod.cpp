#include <iostream>

using namespace std;

int main() {
    int r;
    int w; 
    int k;
    int sNp = 0;
    int sPp = 0; 
    int nP;
    cin >> r;
    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){

            cin >> k;
            if(i>j){
                sPp += k;
            }else if(i<j){
                sNp += k;
            }else{
                nP += k;
            }
        }

    }
    cout << sPp << endl; 
    cout << sNp << endl;
    cout << nP << endl;
    return 0;
}