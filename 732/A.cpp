#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int shoppingCart, shovelPrice, pocketCoins, shovelsToBuy = 1;

  cin >> shovelPrice >> pocketCoins;
  
  shoppingCart = shovelPrice;

  while((shoppingCart - ((shoppingCart / 10) * 10)) != pocketCoins) {
    if(shoppingCart % 10 == 0) {
      break;
    }
    shovelsToBuy++;
    shoppingCart += shovelPrice;
  }

  cout << shovelsToBuy;

  return 0;
}
