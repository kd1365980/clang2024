//1102020kadai082.c
#include<stdio.h>
main()
{
	int a = 0, goukei = 0, i = 0;
	while (1) {
		printf("��������(-999�ŏI��):");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
		if (a < 0) {
			continue;
		}
		goukei += a;
		i += 1;
	}
	printf("���v = %d\n", goukei);
	printf("���� = %.2f\n", (float)goukei / (float)i);
}