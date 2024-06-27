//1102020kadai053.c
#include<stdio.h>
main()
{
	int i, a;
	printf("®”:");
	scanf("%d", &a);
	for (i = a; i <= a + 10; i++) {
		printf("%3d", i);
	}
}