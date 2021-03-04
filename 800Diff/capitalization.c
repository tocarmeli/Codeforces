#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[1001];
    int i;
    int j;

    scanf("%s", word);

    char ascii[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowerAscii[27] = "abcdefghijklmnopqrstuvwxyz";

    int len = strlen(ascii);
    int lowerlen = strlen(lowerAscii);

    for (i = 0; i < len; i++){
        if (word[0] == ascii[i]){
            printf("%s\n", word);
        }
    }

    for (j = 0; j < lowerlen; j++){
        if (word[0] == lowerAscii[j]){
            word[0] = ascii[j];
            printf("%s\n", word);
        }
    }

    return 0;
}