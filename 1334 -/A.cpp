#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases, currPlay, currClear, peeks, maxPlay, maxClear;
  bool possible;
  cin >> testCases;

  while(testCases--) {
    cin >> peeks;
    possible = true;
    for(int i = 0; i < peeks; ++i) {
      cin >> currPlay >> currClear;
      if(currClear > currPlay) {
	possible = false;
      }
      if(!i) {
	maxPlay = currPlay;
	maxClear = currClear;
      }
      else {
	if(currClear < maxClear) {
	  possible = false;
	}
	else {
	  if(currClear > maxClear && currPlay == maxPlay) possible = false;
	  maxClear = currClear;
	}
	
	if(currPlay < maxPlay) {
	  possible = false;
	}
	else maxPlay = currPlay;
      }
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  //system("PAUSE");
  return 0;
}
