#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i = 0, n, k[20];
	char s[21];
	srand(time(0));
	printf("���������͂��ĉ�����>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] += k[i];
		i += 1;
	}
	printf("�Í���������́A%s\n",&s[0]);
	printf("�Í����L�[�́A");
	for (n = 0; n < i; n++) {
		printf("%d,", k[n]);
	}
}