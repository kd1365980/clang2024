#include<stdio.h>

main()
{
	int a = 0, su;
	printf("数を入れて:");
	scanf("%d", &su);
	while (su < a) {
		a += 1;
		printf("*");
	}
	printf("\n");
}