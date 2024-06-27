#include<stdio.h>
int gokei(int a, int b, int c);        //プロトタイプ宣言
float heikin(int a, int b, int c);
main()
{
	int a;
	float b, c;
	
	printf("3つの整数を入力:");
	scanf("%d%f%f", &a, &b, &c);
	a = gokei(a, b, c);
    b = heikin(a, b, c);
	printf("合計 = %d　　平均 = %.2f\n", a, b);
}

/* 関数addの記述 */
int gokei(int a, int b, int c)
{
	int gokei;
	gokei = a + b + c;
	return gokei;
}

float heikin(int a, int b, int c)
{
	float heikin;
	heikin = a / 3.0;
	return heikin;
}