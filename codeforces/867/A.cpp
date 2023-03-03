#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string locations;
  int days, stof = 0, ftos = 0;
  cin >> days;
  cin >> locations;

  for(string::iterator i = locations.begin(); i < locations.end() - 1; ++i) {
    if(*i == 'F' && *(i+1) == 'S') ftos++;
    else if(*i == 'S' && *(i+1) == 'F') stof++;
  }

  if(stof > ftos) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
