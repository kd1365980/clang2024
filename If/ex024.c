#include<stdio.h>
main()
{
	char moji;
	printf("英文字を1文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
			printf("大文字");
	}
	else {
		printf("その他文の字です");
	}
}