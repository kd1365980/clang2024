#include<stdio.h>
main()
{
	int i = 0, k = 0, j = 0, gokei = 0;
	int a[2][2][3] = { {{3,4,5}, {4,5,6} },{{2,2,3}, {2,5,6}} };
	for (i = 0; i <= 1; i++) {
		printf("アパート%d", i + 1);
		for (j = 0; j <= 1; j++) {
			printf("(%d階):", j + 1);
			scanf("%d%d%d", &a[i][j][k], &a[i][j][k + 1], &a[i][j][k + 2]);
			for (k = 0; k <= 2; k++) {
				gokei += a[i][j][k];
			}
		}

	}
	printf("全体で%d人住んでいます\n", gokei);
}