/*
 * https://codeforces.com/problemset/problem/1030/A
 */

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &k);
        if(k){
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
    return 0;
}