#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases, candies;

  cin >> testCases;

  while(testCases--) {
    cin >> candies;
    int a = 2;
    
    for(int i = 3; i < INT_MAX; i += a) {
      if(!(candies%i)) {
	cout << candies / i << endl;
	break;
      }
      a += a;
    }
  }

  return 0;
}
