//1102020kadai037.c
#include<stdio.h>
main()
{
	int ia;
	printf("����");
	scanf("%d", &ia);
	if (ia > 90) {
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�\n");
	}
	else if (ia > 80) {
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�\n");
	}
	else if (ia > 50) {
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�\n");
	}
	else if (ia > 30) {
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�\n");
	}
}