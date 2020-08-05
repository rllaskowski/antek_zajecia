#include <iostream>

using namespace std;

/*
10
0 2 4 6 8
1 3 5 7 9


6
        0 1 2 3 4  5
liczby: 3 5 2 2 10 1 

3 5 2 10
5 2 1
*/


int main () {
    int n;
    cin >> n;
    int liczby[100000];

    for(int i = 0; i<n; i++){
        cin >> liczby[i];
    }

    for(int i = 0; i<n; i+=2){
       cout << liczby[i] << " "; 
    }
    cout << endl;
    for(int i = 1; i<n; i+=2){
        cout << liczby[i] << " ";

    }

}