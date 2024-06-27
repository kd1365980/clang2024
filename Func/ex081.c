#include<stdio.h>
#define TBL_END 8
int tbl_saidai(int* p);
int tbl_saisyo(int* p);
main()
{
	int a[] = { 6,10,8,2,9,5,1,7 }, dai, syo;
	dai = tbl_saidai(a);
	printf("Å‘å’l = %d\n", dai);
	syo = tbl_saisyo(a);
	printf("Å¬’l = %d\n", syo);
}

int tbl_saidai(int* p)
{
	int dai = *p, i = 0;
	while (i != TBL_END){
		if (dai < *p) {
			dai = *p;
		}
		p++;
		i++;
	}
	return(dai);
}

int tbl_saisyo(int* p)
{
	int syo = *p, i = 0;
	while (i != TBL_END) {
		if (syo > *p) {
			syo = *p;
		}
		p++;
		i++;
	}
	return(syo);
}