#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, m, x = 2;

  cin >> n >> m;

  for(int i = 0; i < n/2; ++i) {
    for(int j = 0; j < m; ++j) {
      cout << "#";
    }

    cout << endl;

    if(x % 2 == 0) {
      for(int j = 1; j < m; ++j) {
	cout << ".";
      }
      cout << "#" << endl;
    }
    else {
      cout << "#";
      for(int j = 1; j < m; ++j) {
	cout << ".";
      }
      cout << endl;
    }

    ++x;
  }

  for(int j = 0; j < m; ++j) {
    cout << "#";
  }

  return 0;
}