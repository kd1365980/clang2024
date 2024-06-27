#include<stdio.h>
main() {
	int i, j1 = 0, j2 = 0, cnt=0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &i);
	printf("\n");
	do {
		do {
			printf(" ");
			j1++;
		} while (j1 <= i);
		do {
			printf("*");
			j2++;
		} while (j2 <= cnt);
		printf("\n\n");
		cnt++;
		j1 = 0;
		j2 = 0;
		i--;
	} while (i > 0);
}