#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int length, zeros = 0;
  vector<int> binaryNumber;
  string cards;

  cin >> length >> cards;

  for(string::iterator i = cards.begin(); i < cards.end(); ++i) {
    if(*i == 'n') binaryNumber.push_back(1);
    else if(*i == 'z') zeros++;
  }
  
  while(zeros--)
    binaryNumber.push_back(0);

  for(vector<int>::iterator i = binaryNumber.begin(); i < binaryNumber.end(); ++i)
    cout << *i << " ";
  
  return 0;
}
