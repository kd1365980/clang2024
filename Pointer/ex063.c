#include<stdio.h>
main()
{
	int i;
	char* p_ride[3] = { "car","bus","shinkansen" };

	printf("%s\n",p_ride[0]);

	while (*p_ride[1]) {
		putchar(*p_ride[1]++);
	}

	printf("\n%s\n", p_ride[2]);



	//	for (i = 0; i < 3; i++) {
	//		printf("%s\n", p_ride[i]);
	//	}
}