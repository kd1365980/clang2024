//1102020kadai02a.c
#include<stdio.h>
main()
{
	double ia, ib;
	printf("2�̎���?");
	scanf("%lf%lf", &ia, &ib);
	printf("* * * %.1f �� %.1f �� �l�����Z * * *\n", ia, ib);
	printf("�a = %f\n", ia + ib);
	printf("�� = %f\n", ia - ib);
	printf("�� = %f\n", ia * ib);
	printf("�� = %f\n", ia / ib);
}