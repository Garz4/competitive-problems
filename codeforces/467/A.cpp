#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int rooms, people, capacity, avaible = 0;

  cin >> rooms;

  while(rooms--) {
    cin >> people >> capacity;
    if(capacity - people >= 2) {
      ++avaible;
    }
  }

  cout << avaible;
  return 0;
}
