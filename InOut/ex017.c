#include<stdio.h>
main()
{
	float no1,no2, no3,ko;
	printf("1つ目の実数:");
	scanf("%f", &no1);
	printf("2つ目の実数:");
	scanf("%f", &no2);
	printf("3つ目の実数:");
	scanf("%f", &no3);
	ko = no1 + no2 + no3;
	printf("合計=%.2f 平均=%.2f", ko, ko / 3);
}