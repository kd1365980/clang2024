#include<stdio.h>
main()
{
	char str[256];

	while (gets(str) != NULL) {       
		puts(str);         //()内の文字列をそのまま出力　\nを末尾に追加

	}
}