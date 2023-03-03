#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> people;
  int testCases, peopleSize, currWealth, minMoney;

  cin >> testCases;

  while(testCases--) {
    cin >> peopleSize >> minMoney;
    while(peopleSize--) {
      cin >> currWealth;
      people.push_back(currWealth);
    }
  }
  
  return 0;
}
