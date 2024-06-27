#include<stdio.h>

main()
{
	int i = 0, su, su1 = 1;
	float suf;
	printf("数を入れて:");
	scanf("%d", &su);
	suf = (float)su;
	printf(" +    -    *      /               乗\n");
	for (i; i <= 10; i++) {
		printf("%2d ", su + i);
		printf("  %2d ", su - i);
		printf("  %2d ", su * i);
		if (i != 0) {
			printf("    %2.2f  ", suf / (float)i);
		}
		else {
			printf("   エラー ");
		}
		if (i != 0) {
			su1 *= su;
			if (su1*su ==  1410065408 || su1 < 0) {
				printf("        エラー\n");
				break;
			}
			printf("   %9d\n", su1);
		}
		else {
			printf("            0\n");
		}
	}
		
}