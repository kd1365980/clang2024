#include<stdio.h>
main()
{
	int g = 0, su, cnt = 0;
	printf("��������:");
	scanf("%d", &su);
	for (; su > -999;){
		g += su;
		cnt++;
		printf("��������:");
		scanf("%d", &su);
	}
	printf("���v=%d   ����=%.2f", g, (float)g / cnt);

}