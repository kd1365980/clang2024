#include<stdio.h>
main()
{
	int a = 5, b = 3, c;
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
}