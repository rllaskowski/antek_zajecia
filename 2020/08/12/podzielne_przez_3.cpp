#include <iostream>
using namespace std;

/*
Wypisz liczby dodatnie podzielne przez 3 mniejsze od wczytanego n
Przyklad
wejście:
20
wyjście
3 6 9 12 15 18
*/

int main() {
  int n;
  cin >> n;
  
  
  for(int i = 3; i<n; i+=3){
    cout << i << " ";
  }
  
  return 0;
}

