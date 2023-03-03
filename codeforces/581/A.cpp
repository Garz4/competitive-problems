#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int redSocks, blueSocks;

  cin >> redSocks >> blueSocks;

  if(redSocks < blueSocks) {
    cout << redSocks << " " << (blueSocks - redSocks)/2;
  }
  else {
    cout << blueSocks << " " << (redSocks - blueSocks)/2;
  }
  
  return 0;
}
