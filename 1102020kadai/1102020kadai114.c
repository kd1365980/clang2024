//1102020kadai114.c
#include<stdio.h>
main()
{
	char data[20];
	int i;
	printf("������:");
	scanf("%s", data);
	for (i = 0; data[i] != '\0'; i++);
	printf("������ = %s\n", data);
	printf("������ = %d", i);
}