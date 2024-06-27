#include<stdio.h>

main()
{
	int a = 0, su;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);
	while (a <= 10) {
		printf("%d + %d = %d\n", su, a, su + a);
		a++;
	}
	printf("\n");
}