#include <iostream>
using namespace std;

/*
Wypisz sume wczytanych liczb podzielona przez 2

Przyklad
Wejscie
7
1 2 1 1 1 2 1
Wyjscie
4
*/
int main() {
  int n;
  int x;
  int suma = 0;
  
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> x;
    suma += x;
  }
  cout << suma/2 << endl;
  
  return 0;
}

