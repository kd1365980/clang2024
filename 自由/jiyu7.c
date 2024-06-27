#include<stdio.h>
main()
{
	int s1, s2;
	char c; float s3;
	printf("”®‚ğ“ü—Í:");
	scanf("%d%c%d", &s1, &c, &s2);
	switch (c){
	case '+':
		s3 = s1 + s2;
		printf("%d + %d = %.0f", s1, s2, s3);
		break;
	case '-':
		s3 = s1 - s2;
		printf("%d - %d = %.0f", s1, s2, s3);
		break;
	case '*':
		s3 = s1 * s2;
		printf("%d * %d = %.0f", s1, s2, s3);
		break;
	case '/':
		s3 = s1 / s2;
		printf("%d / %d = %.2f", s1, s2 ,s3);
		break;
	case '%':
		(int)s3 = s1 % s2;
		printf("%d % %d = %d", s1, s2, s3);
		break;
	default:
		printf("‚»‚Ì‘¼‚Å‚·");
	}
}