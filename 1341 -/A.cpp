#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases, n, a, b, c, d;

  cin >> testCases;

  while(testCases--) {
    cin >> n >> a >> b >> c >> d;
    if((a - b)*n < c - d) {
      if((a + b)*n > c + d) {
	cout << "No" << endl;
      }
      else {
	cout << "Yes" << endl;
      }
    }
    else {
      cout << "Yes" << endl;
    }
  }
  system("PAUSE");
  return 0;
}
