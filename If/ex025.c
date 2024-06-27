#include<stdio.h>
main()
{
	char moji;
	printf("英文字を1文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z' || moji >= 'a' && moji <= 'z') {
			printf("アルファベットです");
	}
	else if (moji >= '0' && moji <= '9') {
		printf("数字です");
	}
	else {
		printf("その他文の字です");
	}
}