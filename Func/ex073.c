#include<stdio.h>
void error_msg(void);                           //�v���g�^�C�v�錾
main()
{
	int a, b;
	printf("data1 data2:");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d / %d = %d �E�E�E %d\n", a, b, a / b, a % b);
	}
}

/* �֐��̋L�q */
void error_msg(void)
{
	printf("0�Ŋ���Z�͂ł��܂���\n");
	return ;
}