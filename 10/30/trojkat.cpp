#include <iostream>

using namespace std;


int main() {
    int a; 
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a >= b && a >= c){
        //a jest najdluzszym bokiem
        if(c+b>a){
            cout << "TAK"<< endl;
        }else{
            cout << "NIE" << endl;
        }
    } else if (b >= a && b >= c){
        // b jest najdluzszym bokiem
        if(a+c > b){
            cout << "TAK"<< endl;
        }else{
            cout << "NIE" << endl;
        }
    
    } else {
        // c jest najdluzszym bokiem
        if(a+b>c){
            cout << "TAK"<< endl;
        }else{
            cout << "NIE" << endl;
        }
    }
    

    return 0;
}