#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int events, currOfficers = 0, crimes = 0, currOfficer;

  cin >> events;

  while(events--) {
    cin >> currOfficer;

    if(currOfficer == -1) {
      if(currOfficers <= 0) {
	crimes++;
      }
      else {
	currOfficers--;
      }
    }
    else {
      currOfficers += currOfficer;
    }
  }

  cout << crimes;
  return 0;  
}
