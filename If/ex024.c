#include<stdio.h>
main()
{
	char moji;
	printf("�p������1��������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z') {
			printf("�啶��");
	}
	else {
		printf("���̑����̎��ł�");
	}
}