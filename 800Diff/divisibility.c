#include <stdio.h>

int main(){
    int testCases;
    int firstInp;
    int secondInp;
    int i;
    int moves = 0;

    scanf("%d", &testCases);

    for (i = 0; i < testCases; i++){
        moves = 0;
        scanf("%d%d", &firstInp, &secondInp);

        if (firstInp % secondInp == 0){
            moves = 0;
            printf("%d", moves);
        }
    }


    return 0;
}