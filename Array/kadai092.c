#include<stdio.h>
main()
{
	int i, a[10] = {10,20,30,40,50,60,70,80,90,100};
	int c[10];
	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}
	printf("a[i]=");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\nc[i]=");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");
}