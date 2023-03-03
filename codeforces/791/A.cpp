/*
 * https://codeforces.com/problemset/problem/791/A
 */

#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a, b, years = 0;
    scanf("%d %d", &a, &b);
    while(b >= a){
        a *= 3;
        b *= 2;
        years++;
    }
    printf("%d", years);
    return 0;
}