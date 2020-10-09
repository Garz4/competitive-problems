#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t;
  long long a,b,c,d,x,y,x1,y1,x2,y2;

  cin >> t;

  while(t--) {
    cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2) {
      if(a > 0 || b > 0) {
	cout << "No" << endl;
	continue;
      }
    }
    if(y1 == y2) {
      if(c > 0 || d > 0) {
	cout << "No" << endl;
	continue;
      }
    }
    b -= a;
    b += x;
    d -= c;
    d += y;
    if(b <= x2 && b >= x1 && d <= y2 && d >= y1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
