//1102020kadai123.c
#include<stdio.h>
main()
{
	double a, b, * pa, * pb;

	printf("実数値1:");
	scanf("%lf", &a);
	printf("実数値2:");
	scanf("%lf", &b);
	
	pa = &a;
	pb = &b;
	if (*pa > *pb) {
		printf("大きいほう = %f\n", *pa);
	}
	if (*pa < *pb) {
		printf("大きいほう = %f\n", *pb);
	}
}