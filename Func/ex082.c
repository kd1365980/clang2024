#include<stdio.h>
#define TBL_END 8
void tbl_syo(int* p);
void tbl_kou(int* p);
main()
{
	int a[] = { 6,10,8,2,9,5,1,7 }, *syo, *kou;
	char sot[256];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	gets(sot);
	if (strcmp(sot, "¸‡")==0) {
		tbl_syo(a);
	}
	if (strcmp(sot, "~‡") == 0) {
		tbl_kou(a);
	}
	for (int i = 0; i < TBL_END; i++) {
		printf("%3d", a[i]);
	}
}

void tbl_syo(int* p)
{
	int w, i, j;
	for (i = 0; i < TBL_END - 1; i++) {
		for (j = i + 1; j < TBL_END; j++) {
			if (*(p + i) > *(p + j)) {
				w = *(p+i);
				*(p + i) = *(p + j);
				*(p + j) = w;
			}
		}
	}
}

void tbl_kou(int* p)
{
	int w, i, j;
	for (i = 0; i < TBL_END - 1; i++) {
		for (j = i + 1; j < TBL_END; j++) {
			if (*(p + i) < *(p + j)) {
				w = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = w;
			}
		}
	}
}