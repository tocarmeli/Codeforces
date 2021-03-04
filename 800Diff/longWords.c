#include <stdio.h>
#include <string.h>

int main(){

	int times;
	int i;
	scanf("%d", &times);

	char word[256];
	int len;
	char finalWord[100];


	for (i = 0; i < times; ++i){
		scanf("%s", word);
		if (strlen(word) <= 10){
			printf("%s\n", word);
		}
		else {
			len = strlen(word) - 2;
			printf("%c%i%c\n", word[0], len, word[(strlen(word) - 1)]);
		}
	}
	return 0;
}
