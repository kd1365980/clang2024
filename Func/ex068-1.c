#include<stdio.h>
main()
{
	int a, b, c, ret;

	printf("3ツつの整数を入力:");
		ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret = %d  a = %d  b = %d  c = %d\n\n", ret, a, b, c);

	printf("整数を入力(Ctrl+zで終了):");
	while (scanf("%d", &a) != EOF) {
		printf("a = %d\n", a);
		printf("整数を入力(Ctrl+zで終了):");
	}
}