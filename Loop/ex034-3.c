#include<stdio.h>
main() {
	int i, j = 0, cnt=0;
	printf("��������:");
	scanf("%d", &i);
	printf("\n");
	do {
		do {
			printf("*");
			j++;
		} while (j <= cnt);
		printf("\n\n");
		cnt++;
		j = 0;
		i--;
	} while (i > 0);
}