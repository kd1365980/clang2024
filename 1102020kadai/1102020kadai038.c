//1102020kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g��1��������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("�ύX���ʂ�%c\n", moji + 32);
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("�ύX���ʂ�%c\n", moji - 32);
	}
	else {
		printf("%c\n", moji);
	}
}