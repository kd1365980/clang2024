#include<stdio.h>
main()
{
	int i = 1, su;
	printf("数を入れて:");
	scanf("%d", &su);
	for (i; i <= 5; i++) {
		printf("%d ",  i * su);
	}
}