#include<stdio.h>
main()
{
	int i, a[5];
	for (i = 0; i <= 4; i++) {
		a[i] = (i + 1) * 10;
	}
	for (i = 0; i <= 4; i++) {
		printf("data[%d]=%d\n", i, a[i]);
	}
}