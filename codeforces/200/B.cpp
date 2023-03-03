#include <bits/stdc++.h>
using namespace std;

int main(void) {
  double arraySize, currProb, totalProb = 0;
  int loop;

  cin >> arraySize;
  loop = arraySize;
  
  while(loop--) {
    cin >> currProb;
    totalProb += currProb/arraySize;
  }

  cout << totalProb << endl;
  
  return 0;
}
