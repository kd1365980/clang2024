//1102020kadai041.c
#include<stdio.h>
main()
{
	int a = 0, goukei = 0, i = -1;
	while (a != -999) {
		goukei += a;
		i += 1;
		printf("��������(-999�ŏI��):");
		scanf("%d", &a);
	}
	printf("���v = %d\n", goukei);
	printf("���� = %.2f\n", (float)goukei / (float)i);
}