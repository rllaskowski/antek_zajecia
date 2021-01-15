#include <iostream>

using namespace std;


/*
4
# i= 0 i+1 = 1
## i =1 i+1 = 2
### i=2 i +1 = 3
####
*/

void wypisz(char znak, int n){
    for(int i = 0; i<n; i++){
        cout << znak;
    }
}

/*
string napis = "OLA"
napis[0] = 'O'
napis[1] = 'L'
napis[2] = 'A' 

i=0
slowo[0]
i=1
slowo[1]
i=2
slowo[2]
i=3
slowo[3]
...
slowo[]

*/
int main() {
    string slowo;
    cin >> slowo;

    /*slowo.size() to dlugosc napisu*/
    for(int i = 0; i<slowo.size(); i++){
        wypisz('#', i + 1);
        cout << slowo[i];
        cout << endl;
    }
   
    return 0;
}