#include<stdio.h>
main()
{
	int i = 0, n, k[20];
	char s[21];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		printf("s[%d]‚Ì•œ†‰»ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i += 1;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n",&s[0]);
	
}