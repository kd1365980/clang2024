#include<stdio.h>
main()
{
	int i = 0;
	char data[]="Apple";
	printf("1文字ずつで表示\n");
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s", &data[0]);
}