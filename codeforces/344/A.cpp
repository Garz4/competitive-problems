#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, currMagnet, prevMagnet = 0, magnetGroups = 0;

  cin >> n;

  while(n--) {
    cin >> currMagnet;
    if(currMagnet != prevMagnet) {
      magnetGroups++;
      prevMagnet = currMagnet;
    }
  }

  cout << magnetGroups << endl;
  
  return 0;
}
