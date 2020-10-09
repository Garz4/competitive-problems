#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int arraySize;
  cin >> arraySize;
  vector<vector<int>> table(arraySize, vector<int>(arraySize, 1));
  
  for(int i = 1; i < arraySize; ++i) {
    for(int j = 1; j < arraySize; ++j) {
      table[i][j] = table[i-1][j] + table[i][j-1];
    }
  }
  
  cout << *((*(table.end()-1)).end()-1);
  
  return 0;
}
