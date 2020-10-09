#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> citizens;
  int input, arraySize, maxWelfare = -1, currWelfare = 0;

  cin >> arraySize;
  
  while(arraySize--) {
    cin >> input;
    if(input > maxWelfare) maxWelfare = input;
    citizens.push_back(input);
  }

  for(int i : citizens) {
    currWelfare += (maxWelfare - i);
  }

  cout << currWelfare;
  
  return 0;
}
