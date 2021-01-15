#include <iostream>

using namespace std;

/*
21 60 0
*/
void wypiszLadnie(int liczba){
    if(liczba<10){
        cout << '0' << liczba;
    }else{
        cout << liczba;
    }

}

int main() {
    int h;
    int m;
    int s;

    cin >> h;
    cin >> m;
    cin >> s;

    for(int i=0; i<10; i++){
        s++;

        if(s==60){
            s=0;
            m++;
        }
        if(m==60){
            m=0;
            h++;
        }
        if(h==24){
            h=0;
        }  

        wypiszLadnie(h);
        cout << ':';
        wypiszLadnie(m);
        cout << ':';
        wypiszLadnie(s);
        cout << endl;
    }

    return 0;
}