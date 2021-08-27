// Problem 318A
// https://codeforces.com/problemset/problem/318/A

#include <stdio.h>

int main(){
    long long int n, k;
    long long halfSize; // half of n
    scanf("%lld%lld", &n, &k);

    if (n % 2 == 1){
        halfSize = n / 2 + 1;
    } else {
        halfSize = n / 2;
    }

    if (k == 1){
        printf("%d\n", 1);
    } else if  (k <= halfSize){
        printf("%lld\n", k * 2 - 1);
    } else if (k > halfSize){
        printf("%lld\n", (k - halfSize) * 2);
    }

    return 0;
}