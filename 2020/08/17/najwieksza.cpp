#include <iostream>

using namespace std;

/*
maks = 55

N = 5
5
1
2
4
55


maks = 23

*/

int main() {
    int n;
    int x;
    int maks = 0;

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> x;

        if(x>maks){
            maks = x;
        }
    }
    cout << maks << endl;

    return 0;
}