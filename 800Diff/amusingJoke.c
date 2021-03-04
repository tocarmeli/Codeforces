#include <stdio.h>
#include <string.h>

int main(){
    char guestName[100];
    char residenceHost[100];
    char piledLetters[100];
    int i;

    scanf("%s%s%s", guestName, residenceHost, piledLetters);

    int guestLen = strlen(guestName);
    int residentLen = strlen(residenceHost);
    int piledLen = strlen(piledLetters);

    if (guestLen + residentLen != piledLen){
        printf("NO\n");
    } else{
        break;
    }

    return 0;
}