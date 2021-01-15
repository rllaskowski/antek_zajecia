#include <iostream>


using namespace std;

int main() {
    string slowo;
    cin >> slowo;
    int pierwsza=0;
    int ostatnia=slowo.size()-1;
    
    for(int i=0; i<slowo.size(); i++){
        if(i%2==0){
            cout << slowo[pierwsza];
            pierwsza+=1;
        }else{
            cout << slowo[ostatnia];
            ostatnia-=1;
        }
    }


    return 0;
}