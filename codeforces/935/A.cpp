#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int employees, numOfTeamLeaders = 1;
  cin >> employees;

  for(int i = 2; i <= employees / 2; ++i) {
    if((employees - i) % i == 0) numOfTeamLeaders++;
  }

  cout << numOfTeamLeaders;
  
  return 0;
}
