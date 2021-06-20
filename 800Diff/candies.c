// Problem 1335A
// https://codeforces.com/problemset/problem/1335/A
#include <stdio.h>

int main(){
	int t;
	long long int n;
	scanf("%d", &t);

	for (int k = 0; k < t; k++){
		scanf("%lld", &n);
		if (n < 3){
			printf("%d\n", 0);
		} else if (n % 2 == 0){
			printf("%lld\n", n / 2 - 1);
		} else{
			printf("%lld\n", n / 2);
		}
	}

	return 0;
}
