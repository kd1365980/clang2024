//1102020kadai097.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 },c[10];
	for (int i = 0, j = 9; i < 10; i++, j--) {
		c[i] = a[j];
	}
	printf("”z—ñ a =");
	for (int i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	printf("\n”z—ñ c =");
	for (int i = 0; i < 10; i++) {
		printf(" %d", c[i]);
	}
}