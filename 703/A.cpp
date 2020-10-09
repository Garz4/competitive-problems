#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int gameRounds, totalMishka = 0, totalChris = 0, currMishka, currChris;
  cin >> gameRounds;

  while(gameRounds--) {
    cin >> currMishka >> currChris;
    if(currMishka > currChris) totalMishka++;
    else if(currChris > currMishka) totalChris++;
  }
  if(totalMishka == totalChris)
    cout << "Friendship is magic!^^";
  else if(totalMishka < totalChris)
    cout << "Chris";
  else
    cout << "Mishka";
  return 0;
}
