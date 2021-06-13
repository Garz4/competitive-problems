#include <bits/stdc++.h>
using namespace std;

int main(void) {
  long long n;

  cin >> n;

  if(n % 2 == 0) {
    cout << n/2;
  }
  else {
    ++n;
    cout << -1*(n/2);
  }

  return 0;
}
