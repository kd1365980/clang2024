//1102020kadai114.c
#include<stdio.h>
main()
{
	char data[20];
	int i;
	printf("文字列:");
	scanf("%s", data);
	for (i = 0; data[i] != '\0'; i++);
	printf("文字列 = %s\n", data);
	printf("文字数 = %d", i);
}