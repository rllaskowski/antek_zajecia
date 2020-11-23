#include <iostream>

using namespace std;

int main() {
    string napis;
    int iW = 0;
    cin >> napis;
    char sL = 'o'; // literka ktorej szukamy
    for(int i = 0; i<napis.size(); i++){

        if(napis[i]=='o' && sL == 'o'){
            sL='i';
        } else if(napis[i]=='i' && sL == 'i'){
            sL='j';
        }else if(napis[i]=='j' && sL == 'j'){
            iW+=1;
            sL='o';
        }
        
    }
    if(iW==0){
        cout << "NIE";
    }else{
        cout << iW;
    }
    return 0;
}