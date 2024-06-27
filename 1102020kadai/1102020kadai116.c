//1102020kadai116.c
#include<stdio.h>
main()
{
	char a[40], b[20];
	int i, j;
	printf("•¶Žš—ñ1:");
	gets(a);
	printf("•¶Žš—ñ2:");
	gets(b);
	for (i = 0; a[i] != '\0'; i++);
	for (i, j = 0; b[j] != '\0'; i++, j++) {
		a[i] = b[j];
	}
	printf("%s\n", a);
}