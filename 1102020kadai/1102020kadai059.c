//1102020kadai059.c
#include<stdio.h>
main()
{
	int i, j;
	printf("       1  2  3  4  5  6  7  8  9\n");
	printf("================================\n");
	for (i = 1; i <= 9; i++) {
		printf("\n%d |  ", i);
		for (j = 1 ; j <= 9; j++) {
			printf("%3d", i * j);
		}
	}
}