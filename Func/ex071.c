#include<stdio.h>
int gokei(int a, int b, int c);        //�v���g�^�C�v�錾
float heikin(int a, int b, int c);
main()
{
	int a;
	float b, c;
	
	printf("3�̐��������:");
	scanf("%d%f%f", &a, &b, &c);
	a = gokei(a, b, c);
    b = heikin(a, b, c);
	printf("���v = %d�@�@���� = %.2f\n", a, b);
}

/* �֐�add�̋L�q */
int gokei(int a, int b, int c)
{
	int gokei;
	gokei = a + b + c;
	return gokei;
}

float heikin(int a, int b, int c)
{
	float heikin;
	heikin = a / 3.0;
	return heikin;
}