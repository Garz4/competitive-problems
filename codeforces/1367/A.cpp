#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases;
  string s;

  cin >> testCases;

  while(testCases--) {
    cin >> s;

    for(int i = 0; i < s.length() - 1; ++i) {
      if(s[i] == s[i+1]) {
	s.erase(i,1);
      }
    }

    cout << s << endl;
  }

  return 0;
}
