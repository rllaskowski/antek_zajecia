#include <iostream>

using namespace std;


int main() {
    int l;
    cin >> l;

    if (l<90) {
        cout << "OSTRY";
    } else if (l==90) {
        cout << "PROSTY";
    } else {
        cout << "ROZWARTY";
    }
    return 0;
}