#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int testCases, sudokuSize;
  string sudoku;

  cin >> testCases;

  while(testCases--) {
    sudokuSize = 9;
    while(sudokuSize--) {
      cin >> sudoku;

      for(auto i = sudoku.begin(); i != sudoku.end(); ++i) {
	if(*i == '1') {
	  *i = '2';
	  break;
	}
      }
      
      cout << sudoku << endl;
    }
  }
  
  return 0;
}
