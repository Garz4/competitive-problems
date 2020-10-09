#include <bits/stdc++.h>
using namespace std;

int main(void) {
  bool flag;
  map<char, int> m;
  int year;
  string s;

  cin >> year;

  while(year++) {
    m.clear();
    flag = true;
    s = to_string(year);

    for(auto i = s.begin(); i != s.end(); ++i) {
      m[*i]++;
      if(m[*i] >= 2) {
	flag = false;
	break;
      }
    }

    if(flag) {
      cout << year;
      return 0;
    }
  }

  return 0;
}
