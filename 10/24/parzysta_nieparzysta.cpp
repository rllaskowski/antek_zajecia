#include <iostream>

using namespace std;

int main() {
    int pnp;
    
    for(int i=0; i<12; i++){
        cin >> pnp;

        if(pnp%2 == 0){
            cout << "parzysta" << endl;
        }else{
            cout << "nieparzysta" << endl;
        }
    }
    return 0;
}