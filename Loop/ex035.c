#include<stdio.h>

main()
{
	int gokei = 0, ia;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &ia);
		if (ia == -999)break;
		gokei += ia;
	}
	printf("‡Œv=%d", gokei);
}