#include<stdio.h>
main()
{
	int i = 0, su, su1 = 1;
	float suf;
	printf("��������:");
	scanf("%d", &su);
	suf = (float)su;
	printf(" +    -    *      /               ��\n");
	for (i; i <= 10; i++) {
		printf("%2d ", su + i);
		printf("  %2d ", su - i);
		printf("  %2d ", su * i);
		if (i != 0) {
			printf("    %2.2f  ", suf / (float)i);
		}
		else {
			printf("   �G���[ ");
		}
		if (su <= 7) {
			if (i != 0) {
				su1 *= su;
				printf("    %9d\n", su1);
			}
			else {
				printf("            0\n");
			}
		}
		else {
			if (i == 3 || i == 7) {
				printf("          �G���[\n");
			}
			else {
				printf("\n");
			}
		}
	}
}