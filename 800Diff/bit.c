#include <stdio.h>
#include <string.h>

int main(){
	int times;
	int total = 0;
	int i;
	char operation[150];
	int compare1;
	int compare2;
	int compare3;
	int compare4;

	scanf("%d\n", &times);

	for (i = 0; i < times; ++i){
		scanf("%c\n", operation);
		compare1 = strcmp("X++", operation);
		compare2 = strcmp("++X", operation);
		compare3 = strcmp("X--", operation);
		compare4 = strcmp("--X", operation);
		if (compare1 == 0 || compare2 == 0){
			++total;
		} else {
			--total;
		}
	}
	printf("%d %d %d %d\n", compare1, compare2, compare3, compare4);

	//printf("%i\n", total);
	return 0;
 }
