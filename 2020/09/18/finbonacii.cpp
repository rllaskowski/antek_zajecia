#include <iostream>

using namespace std;

/*
a = 5
b = 8
*/


int main() {
    int a = 1;
    int b = 1;
    int c;

    for(int i = 1; i <=30; i++){
        /* a i b to dwie ostatnie liczby fibonaciego 
        w takim razie kolejna to a+b
        */
       cout << a+b << " ";
       c = b;
       b = a+b;
       a = c;
    }
    return 0;
}