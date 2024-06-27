//1102020kadai043.c
#include<stdio.h>
main()
{
	int a = 0;
	printf("文字コード(-1で終了):");
	scanf("%d", &a);
	while (a != -1) {
		printf("%c\n", (char)a);
		printf("文字コード(-1で終了):");
		scanf("%d", &a);
	}
}