//1102020kadai123.c
#include<stdio.h>
main()
{
	double a, b, * pa, * pb;

	printf("ŽÀ”’l1:");
	scanf("%lf", &a);
	printf("ŽÀ”’l2:");
	scanf("%lf", &b);
	
	pa = &a;
	pb = &b;
	if (*pa > *pb) {
		printf("‘å‚«‚¢‚Ù‚¤ = %f\n", *pa);
	}
	if (*pa < *pb) {
		printf("‘å‚«‚¢‚Ù‚¤ = %f\n", *pb);
	}
}