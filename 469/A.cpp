#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> indexes;
  int levels, indexSize, index;

  cin >> levels >> indexSize;

  if(indexSize) {
    while(indexSize--) {
      cin >> index;
      indexes.push_back(index);
    }
  }
  
  cin >> indexSize;

  if(indexSize) {
    while(indexSize--) {
      cin >> index;
      indexes.push_back(index);
    }
  }

  if(!indexes.size()) {
    cout << "Oh, my keyboard!";
    return 0;
  }
  
  sort(indexes.begin(), indexes.end());

  if(indexes[0] != 1 || indexes[indexes.size()-1] != levels) {
    cout << "Oh, my keyboard!";
    return 0;
  }

  for(int i = 0; i < indexes.size()-1; ++i) {
    if(indexes[i+1] >= indexes[i] + 2) {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }

  cout << "I become the guy.";
  return 0;
}
