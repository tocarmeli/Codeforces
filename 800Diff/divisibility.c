// Problem 1328A
// https://codeforces.com/problemset/problem/1328/A

#include <stdio.h>

int main(){
    int t;
    long long int a;
    long long int b;
    int totalSteps;

    scanf("%d", &t);

    for (int k = 0; k < t; k++){
        totalSteps = 0;
        scanf("%lld %lld", &a, &b);
        /*while (a % b != 0){
            a++;
            totalSteps++;
        }*/
        if (a % b != 0){
            totalSteps = b - (a % b);
            printf("%d\n", totalSteps);
        } else {
            printf("%d\n", 0);
        }
        
    }
    

    return 0;
}
