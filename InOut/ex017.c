#include<stdio.h>
main()
{
	float no1,no2, no3,ko;
	printf("1‚Â–Ú‚ÌÀ”:");
	scanf("%f", &no1);
	printf("2‚Â–Ú‚ÌÀ”:");
	scanf("%f", &no2);
	printf("3‚Â–Ú‚ÌÀ”:");
	scanf("%f", &no3);
	ko = no1 + no2 + no3;
	printf("‡Œv=%.2f •½‹Ï=%.2f", ko, ko / 3);
}