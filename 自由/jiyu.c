#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g��1��������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("%c = %c\n", moji, moji + 32);
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("%c = %c\n", moji, moji - 32);
	}
	else {
		printf("�G���[�@%c�̓A���t�@�x�b�g�ł͂���܂���\n", moji);
	}
}