//1102020kadai099.c
#include<stdio.h>
main()
{
	char a[10];
	int	kai, i;
	printf("回数と文字列を入力");
	scanf("%d%s", &kai, &a[0]);
	for (i = 0; i < kai; i++) {
		printf("%s\t", &a[0]);
	}
}