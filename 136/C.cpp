#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int arraySize, currVal;
  vector<int> present;
  
  cin >> arraySize;

  while(arraySize--) {
    cin >> currVal;
    present.push_back(currVal);
  }

  sort(present.begin(), present.end());
  
  if(*(present.end()-1) == 1) {
    *(present.end()-1) = 2;
  }
  else {
    present.insert(present.begin(), 1);
    present.erase(present.end()-1);
  }

  for(int i : present)
    cout << i << " ";

  return 0;
}
