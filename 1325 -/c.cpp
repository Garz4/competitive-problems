/*
 * Coded by: Uriel Garía Rivas
 */
#include <iostream>
#include <vector>

using namespace std;

void xorcist(int u, int v);

int main(void){
    int u, v;
    cin >> u >> v;
    xorcist(u, v);
    return 0;
}

void xorcist(int u, int v){
    int currSum = 2;
    vector<int> nums, currArr(2, 1);

    for(int i = 1; i < 1000000; i++){
        if( && currSum == v){
            nums = currArr;
            break;
        }
    }

    if(nums.size() == 0) cout << "-1" << endl;
    else{
        cout << nums.size() << endl;
        for(vector<int>::iterator i = nums.begin(); i < nums.end(); i++)
            cout << *i << " ";
    }
    return;
}