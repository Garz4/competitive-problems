#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  int a = 0;

  cin >> s;

  for(string::iterator i = s.begin(); i != s.end(); ++i) {
    if(*i == 'a') a++;
  }
  
  if(a > s.length()/2) cout << s.length() << endl;
  else {
    for(string::iterator i = s.begin(); i != s.end();) {
      if(*i != 'a') s.erase(i);
      else ++i;

      if(a > s.length()/2) {
	cout << s.length() << endl;
	break;
      }
    }
  }
  
  return 0;
}
