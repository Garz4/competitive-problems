#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string word, translation;

  cin >> word >> translation;

  if(word.length() != translation.length()) {
    cout << "NO";
  }
  else {
    auto j = word.end();
    --j;
    for(auto i = translation.begin(); i != translation.end(); ++i) {
      if(*i != *j) {
	cout << "NO";
	return 0;
      }
      --j;
    }

    cout << "YES";
    
  }
  
  return 0;
}
