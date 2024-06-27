//1102020kadai095.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int	gokei1 = 0, gokei2 = 0, i;
	for (i = 0; i < 10; i++) {
		gokei1 += a[i];
		gokei2 += b[i];
	}
		
	printf("配列 a =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	printf("\n合計 = %d    平均 = %d", gokei1, gokei1 / (i + 1));
	printf("\n配列 b =");
	for (i = 0; i < 10; i++) {
		printf(" %d", b[i]);
	}
	printf("\n合計 = %d    平均 = %d", gokei2, gokei2 / (i + 1));
}