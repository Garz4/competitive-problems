#include <bits/stdc++.h>
using namespace std;

int main(void) {
  map<char, int> distinctLetters;
  string s;

  cin >> s;

  if(s[1] != '}') {
    distinctLetters[s[1]]++;
  }
  else {
    cout << "0";
    return 0;
  }

  while(s[s.length()-1] != '}') {
    cin >> s;
    distinctLetters[s[0]]++;
  }

  cout << distinctLetters.size();
  return 0;
}
