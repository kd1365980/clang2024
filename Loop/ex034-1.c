#include<stdio.h>
main() {
	int i;
	printf("数を入れて:");
	scanf("%d", &i);
	printf("\n");
	do {
		printf("*****\n\n");
		i--;
	} while (i > 0);
}