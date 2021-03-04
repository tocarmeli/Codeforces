#include <stdio.h>

int main(){
	int k;
	int n;
	int w;
	int total = 0;

	scanf("%d %d %d", &k, &n, &w);

	for (int i = 1; i <= w; i++){
		total += (i*k);
	}
	if (total - n > 0){
		printf("%d\n", total - n);
	} else {
		printf("%d\n", 0);
	}

	return 0;
}
