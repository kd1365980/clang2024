//1102020kadai102.c
#include<stdio.h>
main()
{
	int a[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5], i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			c[i][j] = a[i][j];
			printf("%3d", c[i][j]);
		}
		printf("\n");
	}
}