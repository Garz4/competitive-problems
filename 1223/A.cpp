#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int q, n, m;
  cin >> q;

  while(q--) {
    cin >> n;
    m = 0;
    while(true) {
      if(n % 2 == 0 && n >= 4) break;
      else {
	m++;
	n++;
      }
    }
    cout << m << endl;
  }
  
  return 0;
}
