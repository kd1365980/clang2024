//1102020kadai034.c
#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g��1��������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
		printf("���̕����́u�啶���v�ł�\n");
	}
	else if(moji >= 'a' && moji <= 'z'){
		printf("���̕����́u�������v�ł�\n");
	}
	else {
		printf("ERROR\n");
	}
}