#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> shoes(4,0);
  int shoesToBuy = 0;

  scanf("%d", &shoes[0]);
  scanf("%d", &shoes[1]);
  scanf("%d", &shoes[2]);
  scanf("%d", &shoes[3]);

  sort(shoes.begin(), shoes.end());

  for(int i = 0; i < shoes.size() - 1; ++i) {
    if(shoes[i] != shoes[i+1]) {
      ++shoesToBuy;
    }
  }
  
  shoesToBuy = 3 - shoesToBuy;
  
  printf("%d", shoesToBuy);
  
  return 0;
}
