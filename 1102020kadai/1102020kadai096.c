//1102020kadai096.c
#include<stdio.h>
main()
{
	int i = 0, j, c[10];
	while (c[i] != -999) {
		i += 1;
		printf("®”“ü—Í(-999‚ÅI—¹):");
		scanf("%d", &c[i]);
	}
	printf("”z—ñ c =");
	for (j = 1; j < i; j++) {
		printf(" %d", c[j]);
	}
}