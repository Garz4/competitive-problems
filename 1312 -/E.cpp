/*
 * https://codeforces.com/contest/1312/problem/E
 *  Educational Codeforces Round 83
 *  Coded by: Uriel García Rivas
 */

#include <iostream>
#include <vector>

using namespace std;

void reorder(vector<int> toReorder);

int main(void){
    vector<int> values;
    int length, curr;
    cin >> length;
    while(length--){
        cin >> curr;
        values.push_back(curr);
    }
    reorder(values);
    return 0;
}

void reorder(vector<int> toReorder){
    bool keepLooping = true;
    while(keepLooping){
        if(toReorder.size() <= 1) break;
        for(int i = 0; i < toReorder.size()-1; i++){
            if(toReorder[i] == toReorder[i+1]){
                toReorder[i] += 1;
                toReorder.erase(toReorder.begin()+i+1);
                keepLooping = true;
                break;
            }
            else keepLooping = false;
        }
    }
    cout << toReorder.size() << endl;
    return;
}