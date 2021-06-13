#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int t;
  string s;
  cin >> t;

  while(t--) {
    cin >> s;
    if(*(s.end()-1) == 'o') cout << "FILIPINO" << endl;
    else if(*(s.end()-1) == 'u') cout << "JAPANESE" << endl;
    else cout << "KOREAN" << endl;
  }
 
  return 0;
}
