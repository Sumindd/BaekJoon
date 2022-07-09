#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int D, H, W;
	scanf("%d %d %d", &D, &H, &W);
	
	double d = sqrt(H * H + W * W);
	double h = H*D/d; //h=높이
	double w = W*D/d; //w=너비

	printf("%d %d", (int)h, (int)w);

	return 0;
}