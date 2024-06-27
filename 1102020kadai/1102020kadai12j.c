//1102020kadai12j.c
#include<stdio.h>
main()
{
	char a[20] = "ringo", c[20];
	char* pa,* pc;
	int i, j;
	pa = a;
	pc = c;
	for (i = 0; *(pa + i) != '\0'; i++);
	for (j = 0; i >= 0; i--, j++) {
		*(pc + j) = *(pa + i);
	}
	*(pc+j) = '\0';
	for (i = 0; *(pa + i) != '\0'; i++) {
		putchar(*pa+i);
	}

	for (i = 0; *(pc + i) != '\0'; i++) {
		putchar(*pc+i);
	}
}