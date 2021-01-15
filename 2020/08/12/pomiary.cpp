#include <iostream>
using namespace std;

/*
0  false
1  true
2  true
3  true
4  false
5  false
6  false
7  true
8  true
9  false
10 false

wynik = 5
2
3
7
2
3
8
1

czyByla[3]
*/



bool czyByla[1000000];

int main() {
  int pomiar;
  int wynik = 0;
  
  while (1 == 1) {
    cin >> pomiar;

    if (pomiar == -1){
      break;
    }
    if(pomiar > 0){
      /* to znaczy ze wczytana liczba jest dodatnia */
      if(czyByla[pomiar]==false){
        /* to znaczy ze nie wczytalismy nigdy wczesniej tej liczby */
        czyByla[pomiar] = true;
        wynik++;
      }
    }
  }
  cout << wynik << endl;
    
    
  return 0;
}

