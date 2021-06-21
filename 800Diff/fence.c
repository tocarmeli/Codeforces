// Problem 677A
// https://codeforces.com/problemset/problem/677/A

#include <stdio.h>

int main(){
    int n;
    int h;
    int i;
    int width = 0;

    scanf("%d%d", &n, &h);

    for (int k = 0; k < n; k++){
        scanf("%d", &i);
        if (i > h){
            width += 2;
        } else {
            width++;
        }
    }
    printf("%d\n", width);

    return 0;
}