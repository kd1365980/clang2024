#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, un;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("�����̉^���́A");
	for (i = 0; i < un; i++) {
		printf("�� ");
	}
	printf("�ł��B");
}