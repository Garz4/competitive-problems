#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int contests, curr, cMin, cMax, amazing = 0;

  cin >> contests >> curr;

  cMin = curr;
  cMax = curr;
  contests--;
  
  while(contests--) {
    cin >> curr;
    
    if(curr > cMax) {
      cMax = curr;
      amazing++;
    }
    if(curr < cMin) {
      cMin = curr;
      amazing++;
    }
  }

  cout << amazing;
  
  return 0;
}
