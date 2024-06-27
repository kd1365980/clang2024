//1102020kadai052.c
#include<stdio.h>
main()
{
	int i, j;
	for (i = 0; i <= 2; i++) {
		for (j = i * 20 + 1; j <= i * 20 + 20; j++) {
			printf("%3d", j);
		}
		printf("\n");
	}
}