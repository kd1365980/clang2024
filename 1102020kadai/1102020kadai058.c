//1102020kadai058.c
#include<stdio.h>
main()
{
	int i, j;
	for (i = 32; i <= 126;i += 10) {
		for (j = i; j <= i + 10 && j <= 126;j++) {
			printf("%X   %c   ", j, j);
		}
		printf("\n");
	}
}