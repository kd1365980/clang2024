#include<stdio.h>
main()
{
	int i = 0;
	char s[20];
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		s[i] += 1;
		i += 1;
	}
	printf("暗号化文字列は、%s\n",&s[0]);
}