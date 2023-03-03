#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int n, total = 0;
  string toCompare;

  cin >> n;

  while(n--) {
    cin >> toCompare;

    switch(toCompare[0]) {
    case 'T':
      total += 4;
      break;
    case 'C':
      total += 6;
      break;
    case 'O':
      total += 8;
      break;
    case 'D':
      total += 12;
      break;
    case 'I':
      total += 20;
      break;
    default:
      break;
    }
  }

  cout << total;
  return 0;
}
