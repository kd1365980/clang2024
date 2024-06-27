#include<stdio.h>

main()
{
	int su;
	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &su);
	while (su > 0) {
		su -= 1;
		printf("*");
	}
	printf("\n");
}