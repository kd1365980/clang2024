#include<stdio.h>
main()
{
	char moji;
	printf("アルファベットを1文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("%c = %c\n", moji, moji + 32);
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("%c = %c\n", moji, moji - 32);
	}
	else {
		printf("エラー　%cはアルファベットではありません\n", moji);
	}
}