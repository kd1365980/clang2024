#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a, *p_b;
	printf("é¿çsëO:a = %d b = %d \n", a, b);
	p_a = &a;
	p_b = &b;
	a = *p_b;
	b = *p_a;
	printf("é¿çså„:a = %d b = %d \n", a, b);
}