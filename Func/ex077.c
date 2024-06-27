#include<stdio.h>
void keisan(int n1, int n2, int n3, int* dai, int* syo);
main()
{
	int a, b, c, k, h;

	printf("3つの数値:");
	scanf("%d%d%d", &a, &b, &c);
	keisan(a, b, c, &k, &h);
	printf("最大値 = %d  最小値 = %d\n", k, h);
}

/* 関数の記述 */
void keisan(int n1, int n2, int n3, int* dai, int* syo)
{
	*dai = n1;
	if (*dai < n2) { *dai = n2; }
	if (*dai < n3) { *dai = n3; }
	*syo = n1;
	if (*syo > n2) { *syo = n2; }
	if (*syo > n3) { *syo = n3; }
	return;
}