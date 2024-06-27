#include<stdio.h>
enum BitState
{
	Base = 0,              //00000000
	Poison = 1 << 0,       //00000001
	Sleep = 1 << 1,        //00000010
	Paralysis = 1 << 2,    //00000100
	Burn = 1 << 3,         //00001000
	AtkUp = 1 << 4,        //00010000
	AtkDown = 1 << 5       //00100000
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	ClearFlag(&MyState);
}

//��Ԋm�F
void DisplayStatus(UINT s)
{
	printf("\n************���݂̏��*************\n");
	if (s == Base) {
		printf("           �ُ�Ȃ�\n");
	}
	if (s & Poison) {
		printf("                ��\n");
	}
	if (s & Sleep) {
		printf("               ����\n");
	}
	if (s & Paralysis) {
		printf("               ���\n");
	}
	if (s & Burn) {
		printf("               �Ώ�\n");
	}
	if (s & AtkUp) {
		printf("           �U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("           �U���̓_�E��\n");
	}
	printf("***********************************\n\n");
}

//��ԕt�^
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ�t�^���܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I�� >");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			printf("���̏�Ԉُ�͂���܂���\n");
			break;
		}
	}
}

//��ԉ���
void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ��������܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S���� 0:�I�� >");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			printf("���̏�Ԉُ�͂���܂���\n");
				break;
		}
	}
}