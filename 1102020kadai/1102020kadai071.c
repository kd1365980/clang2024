//1102020kadai071.c
#include<stdio.h>
main()
{
	int su1, su2;
	char c;
	printf("‰‰Zq:");
	scanf("%c", &c);
	printf("®”1:");
	scanf("%d", &su1);
	printf("®”2:");
	scanf("%d", &su2);

	switch (c)
	{
	case '+':
		printf("%d + %d = %d", su1, su2, su1 + su2);
		break;
	case '-':
		printf("%d - %d = %d", su1, su2, su1 - su2);
		break;
	case '*':
		printf("%d * %d = %d", su1, su2, su1 * su2);
		break;
	case '/':
		printf("%d / %d = %.2f", su1, su2, (float)su1 / (float)su2);
		break;
	case '%':
		printf("%d % %d = %d", su1, su2, su1 % su2);
		break;
	default:
		break;
	}
}