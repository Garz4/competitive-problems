#include <bits/stdc++.h>
using namespace std;

int main(void) {
  vector<int> a;
  int n, m, response = 0, currSum, nextSum;
  cin >> n;

  while(n--) {
    cin >> m;
    a.push_back(m);
  }

  for(vector<int>::iterator i = a.begin(); i != a.end(); ++i) {
    if(*i) response++;
    else continue;
    
    currSum = *i;
    nextSum = 0;
      
    for(vector<int>::iterator j = i + 1; j != a.end(); ++j) {
      if(!*j) {
	i = j;
	break;
      }
      else if(j != i + 1) response++;
      currSum += *j;
      nextSum += *j;
      if(currSum && nextSum) response += 2;
      else {
	if(currSum) response++;
	if(nextSum) response++;
	i = j;
	break;
      }
      i = j - 1;
      if(j == a.end()-1) i = j;
    }
  }

  cout << response << endl;
  //system("pause");
  return 0;
}
