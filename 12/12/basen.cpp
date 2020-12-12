#include <iostream>

using namespace std;

int main() {
    int odl[1000000];
    int n;
    int kolka=1;
    bool czyPrawo = true;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> odl[i];
    }
    for(int i=0; i<n-1; i++){
        if(czyPrawo == true && odl[i] > odl[i+1]) {
            czyPrawo = false; 
            kolka += 1;
        }else if(czyPrawo == false && odl[i] < odl[i+1]){
            czyPrawo = true; 
            kolka += 1;
        }
    }
    cout << kolka;

    return 0;
}