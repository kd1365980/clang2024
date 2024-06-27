#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("3ƒc‚Â‚Ì®”‚ğ“ü—Í:");
		ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret = %d  a = %d  b = %d  c = %d\n\n", ret, a, b, c);

	printf("®”‚ğ“ü—Í(Ctrl+z‚ÅI—¹):");
	while (scanf("%d", &a) != EOF) {
		printf("a = %d\n", a);
		printf("®”‚ğ“ü—Í(Ctrl+z‚ÅI—¹):");
	}
}