//1102020kadai124.c
#include<stdio.h>
main()
{
	char c,* pc;
	printf("1文:");
	scanf("%c", &c);
	pc = &c;
	printf("次の文字は %c\n", *pc+1);
}