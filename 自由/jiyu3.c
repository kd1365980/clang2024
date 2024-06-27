#include<stdio.h>

main()
{
	int a = 0, su1, su2;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su1);
	su2 = su1;
	while (a <= 10) {
		if (a == 0) {
			printf("%d + %2d = %2d    ", su1, a, su1 + a);
			printf("%d - %2d = %2d    ", su1, a, su1 - a);
			printf("%d * %2d = %2d    ", su1, a, su1 * a);
			printf("               ");
			printf("%d‚Ì %dæ‚Í0\n", su1, a);
		}
		else
		{
			printf("%d + %2d = %2d    ", su1, a, su1 + a);
			printf("%d - %2d = %2d    ", su1, a, su1 - a);
			printf("%d * %2d = %2d    ", su1, a, su1 * a);
			printf("%d / %2d = %2d    ", su1, a, su1 / a);
			printf("%d‚Ì%2dæ‚Í%d\n", su1, a, su2);
			su2 = su1 * su2;
		}
			a++;
	}
	printf("\n");
}