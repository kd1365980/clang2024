#include<stdio.h>
main()
{
	int g = 0, su, cnt = 0;
	printf("数を入れて:");
	scanf("%d", &su);
	for (; su > -999;){
		g += su;
		cnt++;
		printf("数を入れて:");
		scanf("%d", &su);
	}
	printf("合計=%d   平均=%.2f", g, (float)g / cnt);

}