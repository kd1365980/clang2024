#include<stdio.h>
main()
{
	int i;
	float box[2], g = 0;
	for (i = 0; i <= 2; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		g += box[i];
	}
		printf("合計は%.2fです\n平均は%.2fです", g, g / 3);
}