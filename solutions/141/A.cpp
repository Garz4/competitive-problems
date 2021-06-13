#include <bits/stdc++.h>
using namespace std;

int main(void) {
  map<char, int> goal;
  map<char, int> toGoal;
  string curr;

  cin >> curr;

  for(auto i = curr.begin(); i != curr.end(); ++i) {
    goal[*i]++;
  }

  cin >> curr;

  for(auto i = curr.begin(); i != curr.end(); ++i) {
    goal[*i]++;
  }

  cin >> curr;

  for(auto i = curr.begin(); i != curr.end(); ++i) {
    toGoal[*i]++;
  }

  if(goal.size() != toGoal.size()) {
    cout << "NO";
    return 0;
  }

  auto j = goal.begin();
  
  for(auto i = toGoal.begin(); i != toGoal.end(); ++i) {
    if(i->first == j->first) {
      if(i->second == j->second) {
	++j;
      }
      else {
	cout << "NO";
	return 0;
      }
    }
    else {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}
