//1102020kadai084.c
#include<stdio.h>
main()
{
	int su1, su2;
	while (1) {
		printf("����1����(-999�ŏI��):");
		scanf("%d", &su1);
		if (su1 == -999) {
			break;
		}
		printf("����2����(-999�ŏI��):");
		scanf("%d", &su2);
		if (su2 == -999) {
			break;
		}
		if (su1 == 0 || su2 == 0) {
			continue;
		}
		printf("%d / %d = %d ���܂� %d\n", su1, su2, su1 / su2, su1 % su2);
		
	}
}