#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases;
  vector<string> sum;
  string num, toSum;

  cin >> testCases;

  while(testCases--) {
    sum.clear();
    cin >> num;

    for(int i = 0; i < num.length(); ++i) {
      if(num[i] != '0') {
	toSum = num[i];
	
	for(int j = 0; j < num.length() - i - 1; ++j) {
	  toSum += '0';
	}
	
	sum.push_back(toSum);
      }
    }

    cout << sum.size() << endl;
    
    for(auto i = sum.begin(); i != sum.end(); ++i) {
      cout << *i << " ";
    }

    cout << endl;
  }
  
  return 0;
}
