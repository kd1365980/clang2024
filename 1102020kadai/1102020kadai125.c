//1102020kadai125.c
#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pdata, i = 0;

	printf("”z—ñ data =");
	for (i = 0; data[i] != -999;i++) {
		printf(" %d", data[i]);
	}
	printf("\n");
	pdata = data;
	
	printf("”z—ñ data =");
	for (i = 0; *(pdata + i) != -999;i++) {
		printf(" %d", *(pdata + i));
	}
}