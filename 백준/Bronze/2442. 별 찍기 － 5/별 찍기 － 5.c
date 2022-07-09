#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0;
	scanf("%d",&num);
	
	for (int i =1; i <= num; i++) {
		for (int j =1; j<=num-i; j++)
			printf(" ");
		for (int k = 0; k < 2*i- 1; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}