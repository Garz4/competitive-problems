#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases, a, b, c;

  cin >> testCases;

  while(testCases--) {
    cin >> a >> b;
    
    if(a < b) {
      cout << b - a << endl;
    }
    else if(a > b) {
      b *= ceil((double)(a) / (double)(b));
      cout << b - a << endl;
    }
    else {
      cout << "0" << endl;
    }
  }
  
  return 0;
}
