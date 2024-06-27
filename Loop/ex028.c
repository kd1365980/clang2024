#include<stdio.h>

main()
{
	int gokei = 0, ia;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &ia);
	while (ia > -999) {
		gokei += ia;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &ia);
	}
	printf("‡Œv=%d", gokei);
}