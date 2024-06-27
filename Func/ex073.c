#include<stdio.h>
void error_msg(void);                           //プロトタイプ宣言
main()
{
	int a, b;
	printf("data1 data2:");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d / %d = %d ・・・ %d\n", a, b, a / b, a % b);
	}
}

/* 関数の記述 */
void error_msg(void)
{
	printf("0で割り算はできません\n");
	return ;
}