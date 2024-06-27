#include<stdio.h>
int add(int a, int b);                           //プロトタイプ宣言
main()
{
	int a, b, kotae;
	
	printf("2つの整数を入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計 = %d\n", kotae);
}

/* 関数addの記述 */
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}