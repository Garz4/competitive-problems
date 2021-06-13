#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, k, i = 1;
  cin >> n;
  vector<int> r(n, 0), a;
  
  while(n--) {
    cin >> k;
    a.push_back(k);
  }

  for(int x : a) {
    r[x-1] = i;
    ++i;
  }

  for(int x : r)
    cout << x << " ";

  return 0;
}
