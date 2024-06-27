#include<stdio.h>

main()
{
	int a = 1, su = 0;
	while (su <= 300) {
		printf("%d+", a);
		su += a;
		a++;
	}
	printf("\b=%d", su);
	printf("\n");
}