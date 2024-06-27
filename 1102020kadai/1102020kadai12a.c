//1102020kadai12a.c
#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int i, j, su, * pa, * pb;
	pa = a;
	pb = b;

	for (i = 0; *(pa + i) != 0; i++);
	su = i - 1;
	for (j = 0, i -= 1; i >= 0; i--, j++) {
		*(pb + j) = *(pa + i);
	}
	printf("”z—ñ a =");
	for (i = 0; i <= su; i++) {
		printf(" %3d", *(pa + i));
	}
	printf("\n");
	printf("”z—ñ b =");
	for (i = 0; i <= su; i++) {
		printf(" %3d", *(pb + i));
	}
	printf("\n");
}