#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t, r = 0;
  cin >> t;
  
  while(t) {
    if(t >= 5) {
      t -= 5;
      r++;
    }
    else if(t >= 4) {
      t -= 4;
      r++;
    }
    else if(t >= 3) {
      t -= 3;
      r++;
    }
    else if(t >= 2) {
      t -= 2;
      r++;
    }
    else if(t >= 1) {
      t -= 1;
      r++;
    }

    if(t == 0) {
      break;
    }
    
  }

  cout << r << endl;
  return 0;
}
