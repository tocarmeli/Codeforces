#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int j;
    char string[101];
    scanf("%s", string);
    int len = strlen(string);
    char prevChar = '\0';

    if (len < 2){
        printf("%s\n", string);
    } else {
        for (i = 2; i < len; i += 2){
            for (j = 0; j < i; j += 2){
                if (string[j] > string[i]){
                    prevChar = string[i];
                    string[i] = string[j];
                    string[j] = prevChar;
                }
            }
        }
        for (i = 0; i < len - 2; i += 2){
            printf("%c+", string[i]);
        }
        printf("%c\n", string[len - 1]);
    }

    

    


    return 0;
}