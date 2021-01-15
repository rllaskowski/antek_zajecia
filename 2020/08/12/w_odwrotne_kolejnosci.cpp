#include <iostream>
using namespace std;

/*
Wypisz liczby w odwrotnej kolejnosci pomnozone przez 2

Przykład
Wejście:
6
2 3 1 9 10 2
Wyjście:
4 20 18 2 6 4
*/

int main() {
  int n;
  cin >> n;
  int liczby[1000];
  
  for(int i = 0; i<n; i++){
    cin >> liczby[i];
  }

  for(int i = n-1; i>=0; i--){
      cout << liczby[i]*2 << " "; 
  }
  
  
  return 0;
}

