#include <stdio.h>

int main(){
    int n; //num drinks
    int i; // current drink
    int j;
    float total;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        scanf("%d", &j);
        total += j;
    }

    total = (float) total / n;

    printf("%f\n", total);

    return 0;
}