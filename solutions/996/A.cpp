#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int moneyInBank, t = 0, response = 0;

  cin >> moneyInBank;

  while(t + 100 <= moneyInBank) {
    t += 100;
    response++;
  }

  while(t + 20 <= moneyInBank) {
    t += 20;
    response++;
  }

  while(t + 10 <= moneyInBank) {
    t += 10;
    response++;
  }

  while(t + 5 <= moneyInBank) {
    t += 5;
    response++;
  }

  while(t + 1 <= moneyInBank) {
    t += 1;
    response++;
  }

  cout << response;
  return 0;
}
