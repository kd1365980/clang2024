//1102020kadai083.c
#include<stdio.h>
main()
{
	int i;
	for (i = 1; ; i++) {
		if (i == 20) {
			break;
		}
		if (i == 2|| i == 4 || i == 6 || i == 8 || i == 10 || i == 12 || i == 14 || i == 16 || i == 18) {
			continue;
		}
		printf("%3d", i);
	}
}