/* Problem 96A
https://codeforces.com/problemset/problem/96/A */

#include <stdio.h>
#include <string.h>

int main()
{
    char players[100];
    int consecutivePlayers = 1;
    scanf("%s", players);
    for (int k = 0; k < strlen(players) - 1; k++){
        if (players[k] == players[k + 1]){
            consecutivePlayers++;
        } else {
            consecutivePlayers = 1;
        }
        if (consecutivePlayers >= 7){
            break;
        }
    }
    if (consecutivePlayers >= 7){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
