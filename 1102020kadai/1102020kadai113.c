//1102020kadai113.c
#include<stdio.h>
main()
{
	char data[10] = "gameS0ft";
	int i;
	for (i = 0; data[i] != '\0'; i++);
	printf("文字列 = %s\n", data);
	printf("文字数 = %d", i);
}