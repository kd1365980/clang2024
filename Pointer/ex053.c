#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int *p_a, *p_b;
	p_a = &a;
	p_b = &b;
	printf("���s�O:*p_a = %d *p_b = %d \n", *p_a, *p_b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("���s��:*p_a = %d *p_b = %d \n", *p_a, *p_b);
}