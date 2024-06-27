#include<stdio.h>
void keisan(int n1, int n2, int* kei, float* hei);
main()
{
	int a, b, k;
	float h;

	printf("2つの数値:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &k, &h);
	printf("合計 = %d  平均 = %.2f\n", k, h);
}

/* 関数の記述 */
void keisan(int n1, int n2, int* kei, float* hei)
{
	*kei = n1 + n2;
	*hei = (n1 + n2) / 2.0;
	return;
}