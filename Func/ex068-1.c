#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("3�c�̐��������:");
		ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret = %d  a = %d  b = %d  c = %d\n\n", ret, a, b, c);

	printf("���������(Ctrl+z�ŏI��):");
	while (scanf("%d", &a) != EOF) {
		printf("a = %d\n", a);
		printf("���������(Ctrl+z�ŏI��):");
	}
}