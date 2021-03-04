#include <stdio.h>
#include <math.h>

int main(){
	long long n;
	long long outputFunction = 0.0;

	scanf("%lld", &n);

	if (n % 2 == 0){
		outputFunction = n / 2;
	} else {
		outputFunction = -((n + 1) / 2);
	}
	
	printf("%lld\n", outputFunction);

	return 0;
}
