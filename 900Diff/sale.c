// Problem 34B
// https://codeforces.com/problemset/problem/34/B

#include <stdio.h>

int main(){
    int n, m, price;
    int maxPrice = 0;
    scanf("%d%d", &n, &m);
    int values[n];

    // input values and add to array
    for (int k = 0; k < n; k++){
        scanf("%d", &price);
        price *= -1;
        values[k] = price;
    }

    // sort array
    for (int z = 1; z < n; z++){
            for (int j = 0; j < z; j++){
                if (values[j]> values[z]){
                    int prev = values[j];
                    values[j] = values[z];
                    values[z] = prev;
                }
            }
            
    }
    // check if larger price can be achieved with less tvs
    if (values[n - m] < 0){
        for (int a = n - m + 1; a < n; a++){
            if (values[a] >= 0){
                maxPrice += values[a];
            }
        }
    } else {
        for (int f = n - m; f < n; f++){
            maxPrice += values[f];
        }
    }
    
    printf("%d\n", maxPrice);


    return 0;
}
