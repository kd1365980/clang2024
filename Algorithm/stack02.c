#include<stdio.h>
#define SX 1
#define SY 1
#define GX 8
#define GY 1
int map[7][10] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{ 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
	{ 1, 0, 1, 0, 1, 0, 0, 0, 1, 1},
	{ 1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	{ 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;
void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\n�v�b�V����i�A�|�b�v��o�����:");
		key = getche();
		printf("\n");

		if (key == 'i'){
			printf("�f�[�^����:");
			scanf("%d",&data);
			result=push(data);
			if (result == -1) {
				printf("\n�X�^�b�N�������ς��ł�\n\n");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n�X�^�b�N����ł�\n\n");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n      ���݂̃X�^�b�N�̓��e\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��  sp�������Ă���ꏊ(����sp��%d)", sp);
		}
		printf("\n\n");
	}
	return;
}

//�X�^�b�N�Ƀf�[�^��ς�
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }
	stack[sp] = d;
	sp += 1;
	return 0;
}

//�X�^�b�N�Ƀf�[�^�����o��
int pop(int* pd)
{
	if (sp < 1) { return -1; }
	sp -= 1;
	*pd = stack[sp];
	stack[sp] = 0;
	return 0;
}