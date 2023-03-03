#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t, n, m, p;

  cin >> t;

  while(t--) {
    cin >> n >> m;
    p = 2;
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < m; ++j) {
	if((n % 2 == 0 || m % 2 == 0) && i == n - 1 && j >= m - 2)
	  cout << "B";
	else if(p % 2 == 0) 
	  cout << "B";
	else 
	  cout << "W";
	p++;
      }
      if(m % 2 == 0) p++;
      cout << endl;
    }
  }

  return 0;
}
