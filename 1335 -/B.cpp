#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string curr;
  char c;
  int testCases, n, a, b, i;

  cin >> testCases;

  while(testCases--) {
    curr = "";
    c = 'a';
    i = 0;
    cin >> n >> a >> b;
    if(a == b) {
      while(n--) {
	curr += c;
	c++;
	if(c > 'z') c = 'a';
      }
    }
    else {
      while(n--) {
	if(i == b) {
	  i = 0;
	  c = 'a';
	  curr += c;
	}
	else {
	  i++;
	  curr += c;
	  c++;
	}
      }
    }
    cout << curr << endl;
    
  }

  return 0;
}
