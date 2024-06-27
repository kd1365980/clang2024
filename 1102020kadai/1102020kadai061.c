//1102020kadai061.c
#include<stdio.h>
main()
{
	int i = 1;
	do {
		printf("%3d", i);
		i++;
		if (i == 11) {
			printf("\n");
		}
	} while (i != 21);
}