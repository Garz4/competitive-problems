#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, m, h, r = 0;
  cin >> n >> h;

  while(n--) {
    cin >> m;
    if(m <= h) r++;
    else r += 2;
  }
  cout << r << endl;
  return 0;
}
