//1102020kadai031.c
#include<stdio.h>
main()
{
	double ia, ib;
	printf("2�̎���?");
	scanf("%lf%lf", &ia, &ib);
	if (ia > ib) {
		printf("�傫������%f\n", ia);
	}
	else{
		printf("�傫������%f\n", ib);
	}
}