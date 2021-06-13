#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int upper = 0;
  string word;
  
  cin >> word;
  
  for(auto i = word.begin(); i != word.end(); ++i) {
    if(*i >= 'A' && *i <= 'Z') {
      upper++;
    }
  }

  if(upper > word.length() / 2) {
    for(auto i = word.begin(); i != word.end(); ++i) {
      if(*i >= 'a' && *i <= 'z') {
	*i -= 32;
      }
    }
  }
  else {
    for(auto i = word.begin(); i != word.end(); ++i) {
      if(*i >= 'A'  && *i <= 'Z') {
	*i += 32;
      }
    }
  }
  
  cout << word;
  return 0;
}
