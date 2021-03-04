#include <stdio.h>

int main(){
	int problems;
	int i;
	int firstUser;
	int secondUser;
	int thirdUser;
	int points = 0;

	scanf("%d", &problems);

	for (i = 0; i < problems; ++i){
		scanf("%d %d %d", &firstUser, &secondUser, &thirdUser);
		if ((firstUser + secondUser + thirdUser) > 1){
			points++;
		}
	}

	printf("%d\n", points);


	return 0;
}
