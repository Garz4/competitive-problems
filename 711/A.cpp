/*
 *
 * http://codeforces.com/problemset/problem/711/A
 * Coded by: Uriel García Rivas
 * 
 */

#include <iostream>     /* cout, cin */
#include <vector>       /* vector<>, push_back(), vector<>::iterator */

using namespace std;

void isPairPossible(vector<string> rows);

int main(void){
	int numRows;
	vector<string> rows;
	string curr;
	cin >> numRows;
	while(numRows--){
		cin >> curr;
		rows.push_back(curr);
	}
	isPairPossible(rows);
	return 0;
}

void isPairPossible(vector<string> rows){
	for(vector<string>::iterator i = rows.begin(); i != rows.end(); i++){
		if((*i)[0] == 'O' && (*i)[1] == 'O'){
			(*i)[0] = '+';
			(*i)[1] = '+';
			cout << "YES" << endl;
			for(vector<string>::iterator j = rows.begin(); j != rows.end(); j++) cout << *j << endl;
			return;
		}
		if((*i)[3] == 'O' && (*i)[4] == 'O'){
			(*i)[3] = '+';
			(*i)[4] = '+';
			cout << "YES" << endl;
			for(vector<string>::iterator j = rows.begin(); j != rows.end(); j++) cout << *j << endl;
			return;
		}
	}

	cout << "NO" << endl;
	return;
}