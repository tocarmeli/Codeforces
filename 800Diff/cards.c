#include <stdio.h>

int main(){
    int t; //test cases
    int w, h; //width and height vars
    int long long n; //number of friends
    int i; //iterator
    int total = 1;

    scanf("%d", &t);

    for (i = 0; i < t; i++){
        scanf("%d%d%lld", &w, &h, &n);
        if (w % 2 == 0){
            ;
        }
        if (total >= n){
            printf("YES\n");
        } else {
            printf("NO\n");
    }
    }

    


    return 0;
}