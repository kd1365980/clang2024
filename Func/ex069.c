#include<stdio.h>
main()
{
	int a, b = 0, cnt = 0;
	
	printf("���������(Ctrl+z�ŏI��):");
	while (scanf("%d", &a) != EOF) {
		b += a;
		printf("���������(Ctrl+z�ŏI��):");
		cnt += 1;
	}
	printf("���v = %d�@�@���� = %.2f\n", b, (float)b / cnt);
}