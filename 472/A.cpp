#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;

  cin >> n;

  for(int i = n-4; i > 0; --i) {
    if((i % 2 == 0 || i % 3 == 0) && ((n - i) % 2 == 0 || (n - i) % 3 == 0)) {
      cout << i << " " << n - i;
      break;
    }
  }

  return 0;
}
