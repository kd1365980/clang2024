#include<stdio.h>
void dispiay1(int n1);                           //�v���g�^�C�v�錾
void dispiay2(int *n2);
main()
{
	int a, b;
	
	printf("���la:");
	scanf("%d", &a);
	dispiay1(a);
	printf("a = %d\n\n", a);
	printf("���lb:");
	scanf("%d", &b);
	dispiay2(&b);
	printf("b = %d\n\n", b);
}

/* �֐��̋L�q */
void dispiay1(int n)
{
	printf("���la = %d\n", n);
	n += 10;
	return ;
}

void dispiay2(int *n)
{
	printf("���lb = %d\n", *n);
	*n += 10;
	return;
}