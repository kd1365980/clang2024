//1102020kadai129.c
#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int i, * pa, * pb, wk;
	pa = a;
	pb = b;

	for (i = 0; *(pa + i) != 0;i++) {
		wk = *(pa + i);
		*(pa + i) = *(pb + i);
		*(pb + i) = wk;
	}
	
	printf("”z—ñ a =");
	for (i = 0; *(pa + i) != 0; i++) {
		printf(" %d", *(pa + i));
	}
	printf("\n");
	printf("”z—ñ b =");
	for (i = 0; *(pb + i) != 0; i++) {
		printf(" %d", *(pb + i));
	}
	printf("\n");
}