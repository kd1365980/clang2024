#include<stdio.h>
main()
{
	int i = 1, su = 0;
	for (i; i <= 10; i++) {
		printf("1から%2dまでの和 = %2d\n", i, i + su);
		su += i;
	}
}