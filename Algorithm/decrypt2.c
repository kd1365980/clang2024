#include<stdio.h>
main()
{
	int i = 0, n, k[20];
	char s[21];
	printf("文字列を入力して下さい>");
	scanf("%s", &s[0]);
	while (s[i] != '\0') {
		printf("s[%d]の復号化キー>", i);
		scanf("%d", &k[i]);
		s[i] -= k[i];
		i += 1;
	}
	printf("復号化済み文字列は、%s\n",&s[0]);
	
}