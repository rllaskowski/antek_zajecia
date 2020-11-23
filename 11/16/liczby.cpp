#include <iostream>

using namespace std;

int main(){
    int  naj[3];
    bool czyWypis[3];

    czyWypis[0] = false;
    czyWypis[1] = false;
    czyWypis[2] = false;
    

    cin >> naj[0];
    cin >> naj[1];
    cin >> naj[2];


    if(naj[0]<naj[1] && naj[0]<naj[2]){
        cout << naj[0];
        czyWypis[0] = true;
    }else if(naj[1]<naj[0] && naj[1]<naj[2]){
        cout << naj[1];
        czyWypis[1] = true;
    }else if(naj[2]<naj[0] && naj[2]<naj[1]){
        cout << naj[2];
        czyWypis[2] = true;
    }

    // druga część

    //pierwsze

      if(czyWypis[0] == true){ // czy  wypisalismy liczbe na 0 miejscu
        if(naj[1]<naj[2]){
            cout << naj[1] << naj[2];
            czyWypis[1] = true;
        }else if(naj[2]<naj[1]) {
            cout << naj[2] << naj[1];
            czyWypis[2] = true;
        }

        //drugie


        }else if(cout<< naj[1]){
        if(naj[0]<naj[2]){
            cout << naj[0];
        }else if(naj[2]<naj[0]){
            cout << naj[2];
        }
        // spr
        if(cout << naj[0]){
            cout << naj[2];
        }else if(cout << naj[2]){
            cout << naj[0];
        }
        // trzecie
    }else if(cout << naj[2]){
        if(naj[0]<naj[1]){
            cout << naj[0];
        } else if(naj[1]<naj[0]){
            cout << naj[1];
        }
        // spr
        if(cout << naj[1]){
            cout << naj[0];
        }else if(cout << naj[0]){
            cout << naj[1];
        }
    }

    return 0;
}