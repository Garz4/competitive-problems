#include <iostream>
using namespace std;

int main(void){
  int loop, n, m;
  cin >> loop;
  while(loop--){
    cin >> n >> m;
    if(n % m == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}
