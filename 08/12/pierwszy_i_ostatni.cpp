#include <iostream>
using namespace std;

/*
n = 7 x = 3
1 3 5 2 3 4 3
pierwszyDzien = 2
ostatniDzien = 5
*/
int main(){
  int n;
  int x;
  cin>> n;
  cin>> x;
  int cena;
  int ostatniDzien = -1;
  int pierwszyDzien = -1;
  
  for(int i = 1; i<=n; i++){
    cin >> cena;
    if(cena == x){
      ostatniDzien = i;
      
      if(pierwszyDzien == -1){
        /* to znaczy ze nigdy wczesniej nie wczytalismy wartosci x */
        pierwszyDzien = i;
      }
    }
  }
  
  cout << pierwszyDzien << " " << ostatniDzien;
  
  return 0;
}

