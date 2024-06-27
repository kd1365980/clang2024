//1102020kadai034.c
#include<stdio.h>
main()
{
	char moji;
	printf("アルファベットを1文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("その文字は「大文字」です\n");
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("その文字は「小文字」です\n");
	}
	else {
		printf("ERROR\n");
	}
}