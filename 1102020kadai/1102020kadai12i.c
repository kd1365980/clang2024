//1102020kadai12i.c
#include<stdio.h>
main()
{
	char a[20] = "mikan", c[20];
	char* pa,* pc;
	pa = a;
	pc = c;
	pc = pa;
	printf("%s", pc);
}