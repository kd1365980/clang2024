//1102020kadai127.c
#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 },* pdata, gokei = 0;
	int i;
	pdata = data;
	printf("�z�� data =");
	for (i = 0; i < 5;i++) {
		printf(" %.3f", *(pdata + i));
		gokei += *(pdata + i);
	}
	printf("\n");
	printf("���v = %.3f\n", gokei);
	printf("���� = %.3f", gokei / i);
}