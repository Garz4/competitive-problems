#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, a = 0, d = 0;
  string s;

  cin >> n >> s;
  
  for(string::iterator i = s.begin(); i != s.end(); ++i) {
    if(*i == 'A') a++;
    else d++;
  }

  if(a == d) cout << "Friendship" << endl;
  else if(a > d) cout << "Anton" << endl;
  else cout << "Danik" << endl;
  
  return 0;
}
