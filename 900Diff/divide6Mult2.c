#include <stdio.h>

int main(){
    int t; //test cases
    int i;
    long long n;
    int score = 0;
    int mult = 0;

    scanf("%d", &t);

    for (i = 0; i < t; i++){
        score = 0;
        mult = 0;
        scanf("%lld", &n);

        while (n != 1){
            if (n % 6 == 0){
                n /= 6;
                score++;
                mult = 0;
        }
            else { 
                n *= 2;
                score++;
                mult++;
                if (mult > 2){
                    score = -1;
                    break;
                }
            }
        }
        printf("%d\n", score);
    }

    return 0;
}