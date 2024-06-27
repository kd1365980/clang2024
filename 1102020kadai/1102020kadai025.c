//1102020kadai025.c
#include<stdio.h>
main()
{
	int ia;
	printf("8i”‚Ì”’l?");
	scanf("%d", &ia);
	ia = (ia / 10) * 8 + ia % 10;
	printf("%d\n", ia);
}