//1102020kadai065.c
#include<stdio.h>
main()
{
	int i = -1, s, gokei = 0;
	do {
		gokei += s;
		i++;
		printf("����(-999�ŏI��):");
		scanf("%d", &s);
	} while (s != -999);
	printf("���v = %d", gokei);
	printf("���� = %.2f", (float)gokei / (float)i);
}