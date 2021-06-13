#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  vector<int> primes;
  cin >> n;

  while(n) {
    if(n % 2 != 0) {
      primes.push_back(3);
      n -= 3;
    }
    else {
      primes.push_back(2);
      n -= 2;
    }
  }

  cout << primes.size() << endl;

  for(int i : primes)
    cout << i << " ";
  return 0;
}
