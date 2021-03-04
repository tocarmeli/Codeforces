#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char str[51];
	int len = strlen(str);
	int i;
	int total = 0;

	scanf("%d %s", &n, str);

	for (i = 1; i < len; i++){
		if (str[i] == str[i - 1]){
			++total;
		} else{
			continue;
		}
	}

	printf("%d\n", total);

	return 0;
}
