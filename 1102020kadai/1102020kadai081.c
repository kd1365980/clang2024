//1102020kadai081.c
#include<stdio.h>
main()
{
	int a = 0, goukei = 0, i = -1;
	while (1) {
		goukei += a;
		i += 1;
		printf("��������(-999�ŏI��):");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
	}
	printf("���v = %d\n", goukei);
	printf("���� = %.2f\n", (float)goukei / (float)i);
}