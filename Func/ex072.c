#include<stdio.h>
void dispiay(int a);                           //プロトタイプ宣言
main()
{
	int a;
	
	printf("data:");
	scanf("%d", &a);
	dispiay(a);
}

/* 関数の記述 */
void dispiay(int a)
{
	printf("入力データ = %d\n", a);
	return ;
}