#include<stdio.h>

main()
{
	int a = 0, su1, su2;
	printf("数を入れて:");
	scanf("%d", &su1);
	su2 = su1;
	while (a <= 10) {
		if (a == 0) {
			printf("%d + %2d = %2d    ", su1, a, su1 + a);
			printf("%d - %2d = %2d    ", su1, a, su1 - a);
			printf("%d * %2d = %2d    ", su1, a, su1 * a);
			printf("               ");
			printf("%dの %d乗は0\n", su1, a);
		}
		else
		{
			printf("%d + %2d = %2d    ", su1, a, su1 + a);
			printf("%d - %2d = %2d    ", su1, a, su1 - a);
			printf("%d * %2d = %2d    ", su1, a, su1 * a);
			printf("%d / %2d = %2d    ", su1, a, su1 / a);
			printf("%dの%2d乗は%d\n", su1, a, su2);
			su2 = su1 * su2;
		}
			a++;
	}
	printf("\n");
}