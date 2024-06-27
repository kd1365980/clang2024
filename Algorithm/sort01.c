#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,10,25,16 };
	int i, j, w;
	printf("ソート前:");
		for (i = 0; i < 5; i++) {
			printf("%3d", d[i]);
		}
	printf("\n\n");

	for (i = 0; i < N-1; i++) {
		for (j = i + 1; j < N; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
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
	