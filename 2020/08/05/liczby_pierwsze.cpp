#include <iostream>
#include <string>

using namespace std;


/*
2: 1, 2 pierwsza
3: 1, 3 pierwsza
4: 1, 2, 4 zlozona
5: 1,5 pierwsza
6: 1,2,3,6 zlozna


11 pierwsza
1, 11
12

8

*/


int main(){
    int n;
    cin >> n;
    int dzielniki = 0;

    for(int i = 1; i <= n; i++) {
        //i jest dzielnikiem liczby n
        // poniewaz reszta z dzielenia n przez i jest rowna 0
        if(n%i == 0){
           dzielniki++;  
        }

        
    }
    
    if(dzielniki>2){
        cout << "Zlożona";

    }else{
        cout << "pierwsza";
    }
   
    return 0;
}