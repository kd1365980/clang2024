#include<stdio.h>
void dispiay1(int n1);                           //プロトタイプ宣言
void dispiay2(int *n2);
main()
{
	int a, b;
	
	printf("数値a:");
	scanf("%d", &a);
	dispiay1(a);
	printf("a = %d\n\n", a);
	printf("数値b:");
	scanf("%d", &b);
	dispiay2(&b);
	printf("b = %d\n\n", b);
}

/* 関数の記述 */
void dispiay1(int n)
{
	printf("数値a = %d\n", n);
	n += 10;
	return ;
}

void dispiay2(int *n)
{
	printf("数値b = %d\n", *n);
	*n += 10;
	return;
}