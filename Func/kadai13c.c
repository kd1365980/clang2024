#include<stdio.h>
void irekae(int* n1, int* n2);
main()
{
	int a = 10, b = 20;

	printf("実行前の値\n");
	printf("a = %d  b = %d\n", a, b);
	irekae(&a, &b);
	printf("実行後の値\n");
	printf("a = %d  b = %d\n", a, b);
}

/* 関数の記述 */
void irekae(int* n1, int* n2)
{
	int w;
	w = *n1;
	*n1 = *n2;
	*n2 = w;
	return;
}