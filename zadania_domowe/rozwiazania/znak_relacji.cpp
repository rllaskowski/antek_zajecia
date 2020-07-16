#include <iostream>

using namespace std;


int main() {
    int liczba1;
    int liczba2;

    cin >>  liczba1 >> liczba2;

    if(liczba1==liczba2){

       cout << liczba1 << "=" << liczba2;
    }else if(liczba1<liczba2){

        cout << liczba1 << "<" << liczba2;
    }else{

        cout << liczba1 << ">" << liczba2;
    }


    return 0;
}
