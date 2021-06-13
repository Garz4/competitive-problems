/*
 * https://codeforces.com/problemset/problem/705/A
 */

#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        printf("I ");
        if(i % 2 != 0) printf("hate ");
        else printf("love ");
        if(i == n) printf("it");
        else printf("that ");
    }
    system("PAUSE");
    return 0;
}