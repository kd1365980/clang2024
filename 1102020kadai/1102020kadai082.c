//1102020kadai082.c
#include<stdio.h>
main()
{
	int a = 0, goukei = 0, i = 0;
	while (1) {
		printf("®”“ü—Í(-999‚ÅI—¹):");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
		if (a < 0) {
			continue;
		}
		goukei += a;
		i += 1;
	}
	printf("‡Œv = %d\n", goukei);
	printf("•½‹Ï = %.2f\n", (float)goukei / (float)i);
}