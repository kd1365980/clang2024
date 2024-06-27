//1102020kadai026.c
#include<stdio.h>
main()
{
	int ia;
	printf("10進数の数値?");
	scanf("%d", &ia);
	printf("8進数 = %d\n", (ia / 64) * 100 + ((ia % 64) / 8) * 10 + ia % 8);
	printf("16進数 = %d\n", (ia / 16) * 10 + ia % 16);
}