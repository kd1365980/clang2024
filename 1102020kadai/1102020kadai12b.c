//1102020kadai12b.c
#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int i, j, su, * pa, * pb;
	pa = a;
	pb = b;

	for (i = 0; *(pa + i) != 0; i++);
	for (j = 0;  *(pb + j) != 0; i++, j++) {
		*(pa + i) = * (pb + j);
	}
	printf("”z—ñ a =");
	for (i = 0; *(pa + i) != 0; i++) {
		printf(" %3d", *(pa + i));
	}
	printf("\n");
}