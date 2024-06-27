//1102020kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("アルファベットを1文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("変更結果は%c\n", moji + 32);
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("変更結果は%c\n", moji - 32);
	}
	else {
		printf("%c\n", moji);
	}
}