#include <iostream>

using namespace std;


int max(int a, int b){
    if(a < b ){
        return b;
    }else{
        return a;
    }
}

int main() {
    int a;
    int b;
    cin >> a >> b;
    cout << max(a, b);

    return 0;
}