#include<stdio.h>
main()
{
	int i, j;
	char* p_ride[3] = { "car","bus","shinkansen" };

	for (i = 0; i < 3; i++) {
		while (*p_ride[i]) {
			printf("%c", *p_ride[i]++);
		}
		printf("\n");
	}
}