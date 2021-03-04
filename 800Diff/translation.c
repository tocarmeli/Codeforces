#include <stdio.h>
#include <string.h>

int main(){
    char s[101];
    char t[101];
    char newWord[101];
    int i;
    int len = strlen(s);
    int index = 0;

    scanf("%s%s", s, t);
    
    for (i = (len - 1); i >= 0; i--){
        printf("%c", s[i]);
    }

    printf("%s\n", newWord);
    printf("%d\n", strcmp(newWord, t));

    if (strcmp(newWord, t) == 0){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}