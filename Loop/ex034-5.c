#include<stdio.h>
main()
{
	int i, j, cnt;
	printf("    :");
	scanf("%d", &i);
	for (cnt = 1; cnt <= i; cnt++) {
		for (j = 0; j < i - cnt; j++) {
			printf(" ");
		}
		for (j = 0; j < cnt; j++) {
			printf("*");
		}
		printf("\n");
	}
}