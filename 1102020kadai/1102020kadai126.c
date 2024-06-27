//1102020kadai126.c
#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* pdata, i = 0, dai, syo;

	pdata = data;
	dai = *pdata;
	syo = *pdata;
	printf("”z—ñ data =");
	for (i = 0; i < 9;i++) {
		printf(" %d", *(pdata + i));
		if (dai < *(pdata + i)) {
			dai = *(pdata + i);
		}
		if (syo > *(pdata + i)) {
			syo = *(pdata + i);
		}
	}
	printf("\n");
	printf("Å‘å’l = %d\n", dai);
	printf("Å¬’l = %d", syo);
}