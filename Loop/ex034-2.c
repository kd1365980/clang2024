#include<stdio.h>
main() {
	int i, j = 1;
	printf("��������:");
	scanf("%d", &i);
	printf("\n");
	do {
		do {
			printf("*");
			j++;
		} while (j <= 5);
		printf("\n\n");
		j = 1;
		i--;
	} while (i > 0);
}