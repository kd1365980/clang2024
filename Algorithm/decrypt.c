#include<stdio.h>
main()
{
	int i = 0;
	char s[20];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] -= 1;
		i += 1;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n",&s[0]);
}