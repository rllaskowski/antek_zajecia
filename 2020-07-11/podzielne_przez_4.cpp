#include <iostream>

using namespace std;


int main() {
    int l;
    int x;
    cin >> l;
    
    for(int i = 0; i <  l; i++){
        cin >> x;
        if(x % 4 == 0){
            // To znaczy, że x jest podzielne przez 4
            cout << x << ";";
        }
        
    }
    

    return 0;
}