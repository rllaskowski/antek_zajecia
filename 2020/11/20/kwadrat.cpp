#include <iostream>


using namespace std;


/*
3
#....
##...
###..
####.
#####

*/
int main() {
    int ile;
    
    cin >> ile;
    
    int kropka = ile-1; // ile . nalezt wypisac
    int hasztag= 1; // ile # nalezy wypisac

    for(int i=0; i<ile; i++){
        for(int i=0; i<hasztag; i++){
            cout << '#';  
        }
        hasztag++;   
        for(int i=0; i<kropka; i++){
            cout << '.';        
        }  
        kropka--;    
        cout << endl;
    }

    return 0;
}