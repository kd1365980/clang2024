#include<stdio.h>
main()
{
	int g = 0, su, cnt = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);
	for (; su > -999;){
		g += su;
		cnt++;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
	}
	printf("‡Œv=%d   •½‹Ï=%.2f", g, (float)g / cnt);

}