#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int D, H, W;
	scanf("%d %d %d", &D, &H, &W);
	
	double d = sqrt(H * H + W * W);
	double h = H*D/d; //h=λμ΄
	double w = W*D/d; //w=λλΉ

	printf("%d %d", (int)h, (int)w);

	return 0;
}