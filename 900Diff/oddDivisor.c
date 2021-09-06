// Problem 1475A
// https://codeforces.com/problemset/problem/1475/A

#include <stdio.h>

int main(){
    int t;
    long long n;

    scanf("%d", &t);

    for (int k = 0; k < t; k++){
        scanf("%lld", &n);
        if (n % 2 == 1){
            printf("YES\n");
        } else {
            int oddDivisorOccurences = 0;
            while (n > 2){
                n /= 2;
                if (n % 2 == 1){
                    oddDivisorOccurences++;
                    break;
                }
            }
            if (oddDivisorOccurences == 0){
                printf("NO\n");
            } else {
                printf("YES\n");
            }
        }
    }


    return 0;
}