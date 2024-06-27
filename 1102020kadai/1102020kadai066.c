//1102020kadai066.c
#include<stdio.h>
main()
{
	int i = 0, gokei = 0;
	do {
		i++;
		printf("%d + ", i);
		gokei += i;
	} while (gokei <= 300);
	printf("\b\b= %d", gokei);
}