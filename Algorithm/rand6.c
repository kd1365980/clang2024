#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int j1, j2;
	printf("(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &j1);
	srand(time(0));
	rand();
	j2= rand() % 3 + 1;
	if (j1 == 1) {
		if (j2 == 1) {
			printf("�v���C���[�̓O�[�ł�\n");
			printf("�R���s���[�^�̓O�[�ł�\n");
			printf("�������ł�\n");
		}
		if (j2 == 2) {
			printf("�v���C���[�̓O�[�ł�\n");
			printf("�R���s���[�^�̓`���L�ł�\n");
			printf("�v���C���[�̏����ł�\n");
		}
		if (j2 == 3) {
			printf("�v���C���[�̓O�[�ł�\n");
			printf("�R���s���[�^�̓p�[�ł�\n");
			printf("�R���s���[�^�̏����ł�\n");
		}
	}
	if (j1 == 2) {
		if (j2 == 1) {
			printf("�v���C���[�̓`���L�ł�\n");
			printf("�R���s���[�^�̓O�[�ł�\n");
			printf("�R���s���[�^�̏����ł�\n");
		}
		if (j2 == 2) {
			printf("�v���C���[�̓`���L�ł�\n");
			printf("�R���s���[�^�̓`���L�ł�\n");
			printf("�������ł�\n");
		}
		if (j2 == 3) {
			printf("�v���C���[�̓`���L�ł�\n");
			printf("�R���s���[�^�̓p�[�ł�\n");
			printf("�v���C���[�̏����ł�\n");
		}
	}
	if (j1 == 3) {
		if (j2 == 1) {
			printf("�v���C���[�̓p�[�ł�\n");
			printf("�R���s���[�^�̓O�[�ł�\n");
			printf("�v���C���[�̏����ł�\n");
		}
		if (j2 == 2) {
			printf("�v���C���[�̓p�[�ł�\n");
			printf("�R���s���[�^�̓`���L�ł�\n");
			printf("�R���s���[�^�̏����ł�\n");
		}
		if (j2 == 3) {
			printf("�v���C���[�̓p�[�ł�\n");
			printf("�R���s���[�^�̓p�[�ł�\n");
			printf("�������ł�\n");
		}
	}
}