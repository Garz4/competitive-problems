#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<pair<int, int>> teams;
  int size, home, guest;

  cin >> size;
  
  while(size--) {
    cin >> home >> guest;
    teams.push_back({home, guest});
  }

  size = 0;
  
  for(auto i = teams.begin(); i != teams.end(); ++i) {
    for(auto j = teams.begin(); j != teams.end(); ++j) {
      if(i != j && i->second == j->first) {
	++size;
      }
    }
  }

  cout << size;

  return 0;
}
