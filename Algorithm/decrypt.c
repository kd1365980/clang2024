#include<stdio.h>
main()
{
	int i = 0;
	char s[20];
	printf("�Í������������͂��ĉ�����>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] -= 1;
		i += 1;
	}
	printf("�������ςݕ�����́A%s\n",&s[0]);
}