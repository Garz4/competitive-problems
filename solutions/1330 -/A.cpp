#include <bits/stdc++.h>

using namespace std;

int maxPlace(vector<int> a, int x);

int main(void) {
  int t, n, x, b;
  vector<int> a;
  
  cin >> t;

  while(t--) {
    a.clear();
    cin >> n >> x;
    while(n--) {
      cin >> b;
      a.push_back(b);
    }
    cout <<  maxPlace(a, x) << endl;
  }
  system("PAUSE");
  return 0;
}

int maxPlace(vector<int> a, int x) {
  int toX;
  if(a.size() == 1) {
    if(*(a.begin()) == x) return x + 1;
    else if(*(a.begin()) < x) return x - *(a.begin()) + 1;
    else return x;
  }
  
  sort(a.begin(), a.end());
  if(*a.begin() == *a.end()) return *a.begin() + 1;
  
  for(vector<int>::iterator i = a.begin(); i < a.end(); ++i) {
    if(*i != *(i+1)) {
      x -= *(i+1);
      x += *i + 1;
      if(x <= 0) return *(i+1);
      else if(x < 0) return *i;
    }
  }
  
  return *(a.end()-1) + x;
}
