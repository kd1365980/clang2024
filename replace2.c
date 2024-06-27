#include<stdio.h>
main()
{
	int a = 5, b = 3;
	a += b;
	b = a - b;
	a -= b;
	printf("%d %d", a, b);
}