#include<stdio.h>
main() {
	int i, i2, j1 = 0, j2 = 0, cnt=0;
	printf("数入力(2以上):");
	scanf("%d", &i);
	i2 = i;

	do {

		do {
			printf(" ");
			j1++;
		} while (j1 < i);
		do {
			printf("*");
			j2++;
		} while (j2 <= cnt);
		j1 = 0;
		j2 = 0;
		printf("  ");
		do {
			printf("*");
			j1++;
		} while (j1 <= cnt);
		printf("\n");
		cnt++;
		j1 = 0;
		i--;
	} while (i > 0);
	i = i2;
	cnt = 0;

	printf("\n");
	do {
		do {
			printf(" ");
			j1++;
		} while (j1 <= cnt);
		do {
			printf("*");
			j2++;
		} while (j2 < i);
		cnt++;
		j1 = 0;
		j2 = 0;
		printf("  ");
		do {
			printf("*");
			j1++;
		} while (j1 < i);
		printf("\n");
		j1 = 0;
		i--;
	} while (i > 0);
	i = i2;
	cnt = 0;
	
	printf("\n");
	for (i; i >= 0; i--) {
		for (j1; j1 < i; j1++) {
			printf(" ");
		}
		for (j2; j2 <= cnt * 2  - 2; j2++) {
			printf("*");
		}
		printf("\n");
		j1 = 0;
		j2 = 0;
		cnt++;
	}
		j1 = 0;
		cnt -= 2;
	for (i; i < i2; i++) {
		for (j1; j1 < i + 2; j1++) {
			printf(" ");
		}
		for (j2; j2 <= cnt * 2 - 2; j2++) {
			printf("*");
		}
		printf("\n");
		cnt--;
		j1 = 0;
		j2 = 0;
	}
}