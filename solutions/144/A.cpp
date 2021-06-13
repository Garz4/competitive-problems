#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int numOfSoldiers, curr, indexMin, indexMax, min, max;

  min = INT_MAX;
  max = 0;
  
  cin >> numOfSoldiers;

  for(int i = 0; i < numOfSoldiers; ++i) {
    cin >> curr;
    
    if(curr > max) {
      max = curr;
      indexMax = i;
    }
    if(curr <= min) {
      min = curr;
      indexMin = i;
    }
  }

  if(max == min) {
    cout << "0";
    return 0;
  }

  min = 0;
  
  if(indexMin > indexMax) {
    if(indexMax) {
      min += indexMax;
    }

    if(indexMin < numOfSoldiers - 1) {
      min += numOfSoldiers - indexMin - 1;
    }
  }
  else {
    min += indexMax + (numOfSoldiers - indexMin - 2);
  }

  cout << min;
  return 0;
}
