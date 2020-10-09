#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> a, b;
  int t, n, a;
  cin >> t;

  while(t--) {
    a.clear();
    b.clear();
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
      cin >> a;
      a.push_back(a);
    }
    
    for(int i = 0; i < n; ++i) {
      cin >> a;
      b.push_back(a);
    }
    
  }

  return 0;
}
