#include<stdio.h>
main()
{
	int i = 0;
	char s[20];
	printf("���������͂��ĉ�����>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] += 1;
		i += 1;
	}
	printf("�Í���������́A%s\n",&s[0]);
}