//1102020kadai123.c
#include<stdio.h>
main()
{
	double a, b, * pa, * pb;

	printf("�����l1:");
	scanf("%lf", &a);
	printf("�����l2:");
	scanf("%lf", &b);
	
	pa = &a;
	pb = &b;
	if (*pa > *pb) {
		printf("�傫���ق� = %f\n", *pa);
	}
	if (*pa < *pb) {
		printf("�傫���ق� = %f\n", *pb);
	}
}