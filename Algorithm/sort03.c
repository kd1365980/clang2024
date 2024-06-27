#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前:");
		for (i = 0; i < N; i++) {
			printf("%3d", d[i]);
		}
	printf("\n\n");

	for (i = 1; i < N; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (d[j] <= d[j + 1]) {
				break;
			}
			w = d[j];
			d[j] = d[j+1];
			d[j+1] = w;
			printf("%3d", d[j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", d[i]);
	}
}
	