#include<stdio.h>

main()
{
	int gokei = 0, ia;
	while (1) {
		printf("��������:");
		scanf("%d", &ia);
		if (ia == -999)break;
		gokei += ia;
	}
	printf("���v=%d", gokei);
}