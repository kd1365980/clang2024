//1102020kadai025.c
#include<stdio.h>
main()
{
	int ia;
	printf("8進数の数値?");
	scanf("%d", &ia);
	ia = (ia / 10) * 8 + ia % 10;
	printf("%d\n", ia);
}