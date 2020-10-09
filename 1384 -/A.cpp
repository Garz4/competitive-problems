#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases, numElem, prevElem;
  string currStr, prevStr;
  char currChar, lastChar;
  vector<int> elem;

  cin >> testCases;

  while(testCases--) {
    cin >> numElem;

    currStr = "";
    currChar = 'a';
    lastChar = 'z';
    prevElem = -1;
    elem = vector<int>(numElem, 0);
    
    for(int i = 0; i < numElem; ++i) {
      cin >> elem[i];
    }

    sort(elem.begin(), elem.end());

    for(int i = 0; i < numElem; ++i) {
      if(elem[i] != prevElem) {
	prevElem = elem[i];
	currStr += string(elem[i] - currStr.length(), currChar++);
      }
      
      cout << currStr << lastChar-- << endl;
    }

    cout << currStr << lastChar << endl;
  }

  system("pause");
  return 0;
}
