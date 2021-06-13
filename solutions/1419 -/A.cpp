#include <bits/stdc++.h>
using namespace std;

int main(void) {
  bool odd, even;
  int testCases, digits;
  string generatedNumber;
  cin >> testCases;
  while(testCases--) {
    cin >> digits;
    if(digits > 1) {
      cin >> generatedNumber;
      odd = false;
      even = false;
      for(int i = 0; i < generatedNumber.length(); ++i) {
	if((i+1) % 2) {
	  if((generatedNumber[i]-'0') % 2) {
	    odd = true;
	  }
	}
	else {
	  if((generatedNumber[i]-'0') % 2 == 0) {
	    even = true;
	  }
	}
      }
      if(digits % 2) {
	if(odd) {
	  cout << "1" << endl;
	}
	else {
	  cout << "2" << endl;
	}
      }
      else {
	if(even) {
	  cout << "2" << endl;
	}
	else {
	  cout << "1" << endl;
	}
      }
    }
    else {
      cin >> digits;
      if(digits%2) {
	cout << "1" << endl;
      }
      else {
	cout << "2" << endl;
      }
    }
  }
  //system("pause");
  return 0;
}
