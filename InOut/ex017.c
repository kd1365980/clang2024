#include<stdio.h>
main()
{
	float no1,no2, no3,ko;
	printf("1�ڂ̎���:");
	scanf("%f", &no1);
	printf("2�ڂ̎���:");
	scanf("%f", &no2);
	printf("3�ڂ̎���:");
	scanf("%f", &no3);
	ko = no1 + no2 + no3;
	printf("���v=%.2f ����=%.2f", ko, ko / 3);
}