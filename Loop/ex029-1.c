#include<stdio.h>

main()
{
	int su;
	printf("��������:");
	scanf("%d", &su);
	while (su > 0) {
		su -= 1;
		printf("*");
	}
	printf("\n");
}