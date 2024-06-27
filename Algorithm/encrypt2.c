#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i = 0, n, k[20];
	char s[21];
	srand(time(0));
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] += k[i];
		i += 1;
	}
	printf("暗号化文字列は、%s\n",&s[0]);
	printf("暗号化キーは、");
	for (n = 0; n < i; n++) {
		printf("%d,", k[n]);
	}
}