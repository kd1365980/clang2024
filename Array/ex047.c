#include<stdio.h>
main()
{
	int i = 0, j = 0;
	float x[3][2], gokei;
	for (j = 0; j <= 2; j++) {
		for (gokei = 0, i = 0; i <= 1; i++) {
			printf("x[%d][%d]=", j, i);
			scanf("%f", &x[j][i]);
			gokei += x[j][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï= %.2f\n\n", j, gokei / 2);
	}
}