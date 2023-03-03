#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int A, B, C, D, a, b, c;

  cin >> A >> B >> C >> D;

  if(A > B && A > C && A > D) {
    a = (B+C-D)/2;
    b = B - a;
    c = C - a;
    if(a + b + c == A) {
      cout << a << " " << b << " " << c;
      return 0;
    }
    
    a = (C+D-B)/2;
    b = C - a;
    c = D - a;
    if(a + b + c == A) {
      cout << a << b << c;
      return 0;
    }

    a = (D+B-C)/2;
    b = D - a;
    c = B - a;
    if(a + b + c == A) {
      cout << a << " " << b << " " << c;
      return 0;
    }
    
  }
  else if(B > A && B > C && B > D) {
    a = (A+C-D)/2;
    b = A - a;
    c = C - a;
    if(a + b + c == B) {
      cout << a << " " << b << " " << c;
      return 0;
    }
    
    a = (C+D-A)/2;
    b = C - a;
    c = D - a;
    if(a + b + c == B) {
      cout << a << " " << b << " " << c;
      return 0;
    }

    a = (D+A-C)/2;
    b = D - a;
    c = A - a;
    if(a + b + c == B) {
      cout << a << " " << b << " " << c;
      return 0;
    }
  }
  else if(C > B && C > A && C > D) {
    a = (A+B-D)/2;
    b = A - a;
    c = B - a;
    if(a + b + c == C) {
      cout << a << " " << b << " " << c;
      return 0;
    }
    
    a = (B+D-A)/2;
    b = B - a;
    c = D - a;
    if(a + b + c == C) {
      cout << a << " " << b << " " << c;
      return 0;
    }

    a = (D+A-B)/2;
    b = D - a;
    c = A - a;
    if(a + b + c == C) {
      cout << a << " " << b << " " << c;
      return 0;
    }
  }
  else {
    a = (A+C-B)/2;
    b = A - a;
    c = C - a;
    if(a + b + c == D) {
      cout << a << " " << b << " " << c;
      return 0;
    }
    
    a = (C+B-A)/2;
    b = C - a;
    c = B - a;
    if(a + b + c == D) {
      cout << a << " " << b << " " << c;
      return 0;
    }

    a = (B+A-C)/2;
    b = B - a;
    c = A - a;
    if(a + b + c == D) {
      cout << a << " " << b << " " << c;
      return 0;
    }
  }
  return 0;
}
