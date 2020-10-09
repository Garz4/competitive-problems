#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, m, o, sLength, tLength, curr;
  vector<string> s, t;
  string c;
  
  cin >> n >> m;
  sLength = n;
  tLength = m;
  
  while(n--) {
    cin >> c;
    s.push_back(c);
  }

  while(m--) {
    cin >> c;
    t.push_back(c);
  }
  
  cin >> n;

  while(n--) {
    cin >> m;
    curr = m % sLength;
    
    if(curr) cout << s[curr - 1];
    else cout << s[sLength - 1];
    
    curr = m % tLength;
    
    if(curr) cout << t[curr - 1] << endl;
    else cout << t[tLength - 1] << endl;
  }
  
  return 0;
}
