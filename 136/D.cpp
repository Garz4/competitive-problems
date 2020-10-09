#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<pair<int, int>> points;
  int currX, currY;

  for(int i = 0; i < 8; ++i) {
    cin >> currX >> currY;
    points.push_back({currX, currY});
  }
  
  return 0;
}
