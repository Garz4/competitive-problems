#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, m;
  bool color = false;
  char curr;
  
  cin >> n >> m;

  while(n--) {
    for(int i = 0; i < m; ++i) {
      cin >> curr;

      if(curr != 'W' && curr != 'B' && curr != 'G') {
	color = true;
      }
    }
  }

  if(color) {
    cout << "#Color";
  }
  else {
    cout << "#Black&White";
  }
  
  return 0;
}
