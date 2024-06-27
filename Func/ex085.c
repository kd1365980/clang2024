#include<stdio.h>
void reverse(char* s1, char* s2);
main()
{
	char str1[256], str2[256];
	printf("•¶Žš—ñ a:");
	gets(str1);
	printf("•¶Žš—ñ b:");
	gets(str2);
	reverse(str1, str2);
	printf("”z—ñ a: %s", str1);
}

void reverse(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (i - 1, j = 0; *(s2 + j) != '\0'; i++, j++) {
		*(s1 + i) = *(s2 + j);
	}
	*(s1 + i) = '\0';
}