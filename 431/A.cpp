#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> calories;
  int curr;
  string playing;
  
  for(int i = 0; i < 4; ++i) {
    cin >> curr;
    calories.push_back(curr);
  }

  cin >> playing;
  curr = 0;
  
  for(string::iterator i = playing.begin(); i != playing.end(); ++i) {
    curr += calories[*i - 1 - '0'];
  }

  cout << curr;
  
  return 0;
}
