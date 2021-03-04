#include <stdio.h>

int main(){
	int t;
	long long n;
	int i; // for loop iterator
	int x = 0;
	int coeff = 1;
	int prevCoeff = coeff;
	
	scanf("%d\n", &t);

	for (i = 0; i < t; i++){
		scanf("%lld\n", &n);
		while (n % coeff == 0){
			prevCoeff = coeff;
			coeff *= 2 + prevCoeff;
			x = n / coeff;
		}
		printf("%d\n", x);
	}

	return 0;
}
