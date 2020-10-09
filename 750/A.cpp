#include <bits/stdc++.h>
using namespace std;

/* 240 mins. */

int main(void) {
  int problems, travelTime, timeLeft = 240;

  cin >> problems >> travelTime;

  timeLeft -= travelTime;

  if(timeLeft <= 0) {
    cout << "0";
  }
  else {
    int probSolved = 0;
    
    for(int i = 1; i <= problems; ++i) {
      timeLeft -= (5 * i);
      if(timeLeft >= 0) {
	probSolved++;
      }
      else {
	break;
      }
    }

    cout << probSolved;
  }
  
  return 0;
}
