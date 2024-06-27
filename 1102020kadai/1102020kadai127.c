//1102020kadai127.c
#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 },* pdata, gokei = 0;
	int i;
	pdata = data;
	printf("”z—ñ data =");
	for (i = 0; i < 5;i++) {
		printf(" %.3f", *(pdata + i));
		gokei += *(pdata + i);
	}
	printf("\n");
	printf("‡Œv = %.3f\n", gokei);
	printf("•½‹Ï = %.3f", gokei / i);
}