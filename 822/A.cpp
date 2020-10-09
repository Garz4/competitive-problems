#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
  if(n == 1) {
    return 1;
  }

  return n * fibonacci(n - 1);
}
  
int main(void) {
  int A, B, n;

  cin >> A >> B, A = fibonacci(A), B = fibonacci(B);
  n = max(A, B);

  for(int i = n; i >= 0; --i) {
    if(A % i == 0 && B % i == 0) {
      cout << i;
      break;
    }
  }
  
  return 0;
}
