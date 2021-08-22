// Problem 1551A
// https://codeforces.com/problemset/problem/1551/A

#include <stdio.h>

int main(){
    int t;
    long long coins, c1, c2;

    scanf("%d", &t);

    for (int k = 0; k < t; k++){
        scanf("%lld", &coins);
        if (coins % 3 == 0){
            c1 = coins / 3;
            c2 = coins / 3;
        } else if (coins % 3 == 1){
            c1 = coins / 3 + 1;
            c2 = coins / 3;
        } else if (coins % 3 == 2){
            c1 = coins / 3;
            c2 = coins / 3 + 1;
        }
        
        printf("%lld %lld\n", c1, c2);
    }

    return 0;
}