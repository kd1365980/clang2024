#include<stdio.h>
main()
{
	int i = 0, n, k[20];
	char s[21];
	printf("���������͂��ĉ�����>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i += 1;
	}
	printf("�������ςݕ�����́A%s\n",&s[0]);
	
}