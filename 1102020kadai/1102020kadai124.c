//1102020kadai124.c
#include<stdio.h>
main()
{
	char c,* pc;
	printf("1��:");
	scanf("%c", &c);
	pc = &c;
	printf("���̕����� %c\n", *pc+1);
}