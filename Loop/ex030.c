#include<stdio.h>

main()
{
	int a = 0, su;
	printf("数を入れて:");
	scanf("%d", &su);
	while (a <= 10) {
		printf("%d + %d = %d\n", su, a, su + a);
		a++;
	}
	printf("\n");
}