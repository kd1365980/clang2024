//1102020kadai056.c
#include<stdio.h>
main()
{
	int i;
	char c;
	printf("�A���t�@�x�b�g������:");
	scanf("%c", &c);
	for (i = 1; i <= 122 - c; i++) {
		printf("%c ", c + i);
	}
}