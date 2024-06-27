#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前:");
		for (i = 0; i < 5; i++) {
			printf("%3d", d[i]);
		}
	printf("\n\n");

	for (i = N - 1; i > 0; i--) {
		for (j = 0; j < N; j++) {
			if (d[j] > d[j+1]) {
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
			printf("%3d", d[j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", d[i]);
	}
}
	