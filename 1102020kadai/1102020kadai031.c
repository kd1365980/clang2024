//1102020kadai031.c
#include<stdio.h>
main()
{
	double ia, ib;
	printf("2つの実数?");
	scanf("%lf%lf", &ia, &ib);
	if (ia > ib) {
		printf("大きい方は%f\n", ia);
	}
	else{
		printf("大きい方は%f\n", ib);
	}
}