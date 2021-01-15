#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int p;
    int wynik=0;
    cin >> p;
    for(int i = 0; i<p; i++) {
        cin >> a;
        cin >> b;

        if(b%a == 0){
            // to znaczy ze b jest podzielne przez a
            cout << b/a << endl;

        }else if (a%b == 0){
            cout << a/b << endl;
        }else{
            cout << 0 << endl;
        }
    }
 
    return 0;
}