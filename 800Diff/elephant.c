#include <stdio.h>

int main(){
	int pos = 0;
	int friendPos;
	int moves = 0;

	scanf("%i", &friendPos);

	
	if (friendPos <= 5){
		moves = 1;
	} else if (friendPos % 5 == 0){
		moves = friendPos/5;
	} else {
		friendPos += 5;
		moves = friendPos / 5;
	}
	printf("%i\n", moves);


	return 0;
}
