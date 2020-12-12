#include <iostream>

using namespace std;


int main() {
    int iD; 
    int d[1000000];
    int lN=0;
    int gdzie=0;
    cin >> iD;
    for(int i = 0; i<iD; i++){
        cin>> d[i];
        if(d[i] > lN){
            lN=d[i];
            gdzie = i;
        }
    }
    d[gdzie] = 0;
    gdzie  =0;
    lN = 0;
  


    return 0;
}
