#include<stdio.h>
void dispiay(int a);                           //�v���g�^�C�v�錾
main()
{
	int a;
	
	printf("data:");
	scanf("%d", &a);
	dispiay(a);
}

/* �֐��̋L�q */
void dispiay(int a)
{
	printf("���̓f�[�^ = %d\n", a);
	return ;
}