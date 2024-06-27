#include<stdio.h>
main()
{
	char moji;
	printf("アルファベットを1文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("変換すると %c\n", moji + 32);
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("変換すると %c\n", moji - 32);
	}
	else {
		printf("エラー　%cはアルファベットではありません\n", moji);
	}
}