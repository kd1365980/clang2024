#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int HP1 = 2000, HP2 = 2000, i = 0, t = 0, u = 0, k = 100, y = 0, h = 20, d, r, r1;
	printf("HP2000�̓G�����ꂽ\n");

	while (1) {
		u = 0;
		srand(time(0));
		rand();
		r = rand() % 10 + 1;
		r1 = rand() % 3 + 1;
		printf("(1:�G�ɑ�_���[�W(�������₷��)�@�@2:���_���[�W(�قړ�����)\n");
		printf(" 3:����̍U��������@�@�@�@�@�@�@�@  4:������)\n�ǂ�����");
		scanf("%d", &d);
		switch (d) {
		case 1:
			if (r == 1 || r == 3 || r == 6) {
				HP2 -= k * 2;
				printf("\n�G��200�_���[�W\n");
				t = 1;
				break;
			}
			if (t == 0) {
				printf("\n�U�����O�ꂽ\n");
			}
			break;
		case 2:
			if (r != 1 || r != 3 || r != 6) {
				HP2 -= k;
				printf("\n�G��100�_���[�W\n");
				t = 1;
				break;
			}
			if (t == 0) {
				printf("\n�U�����O�ꂽ\n");
			}
			break;
		case 3:
			printf("\n�v���C���[�͐g�\����\n");
			if (r != 1 || r != 3 || r != 6) {
				y = 1;
			}
			break;
		case 4:
			HP1 += k;
			printf("\n�v���C���[��HP��������\n");
			break;
		default:
			printf("���̃R�}���h�͂���܂���B������x\n");
			u += 1;
		}
		t = 0;
		if (u == 0) {
			if (r1 == 1) {
				if (y == 0) {
					if (r == 1 || r == 3 || r == 6) {
						HP1 -= k * 2;
						printf("\n�v���C���[��200�_���[�W\n");
						t = 1;
					}
				}
				if (t == 0) {
					printf("\n�U�����O�ꂽ\n");
				}
			}
			t = 0;

			if (r1 == 2) {
				if (y == 0) {
					if (r != 1 || r != 3 || r != 6) {
						HP1 -= k;
						printf("\n�v���C���[��100�_���[�W\n");
						t = 1;
					}
				}

				if (t == 0) {
					printf("\n�U�����O�ꂽ\n");
				}
			}

			if (r1 == 3) {
				if (r != 1 || r != 3 || r != 6 || r != 9) {
					HP2 += k / 2;
					printf("\n�G��HP��������\n");
					t = 1;
				}
				if (t == 0) {
					printf("\n�G�͉������Ȃ�����\n");
				}
			}
			if (HP1 <= 0) {
				printf("�v���C���[�͎���ł��܂���\n");
				break;
			}
			if (HP2 <= 0) {
				printf("�G��|����\n");
					break;
			}
			printf("\n�G��HP�@�@�@�@%4d\n", HP2);
			printf("�v���C���[��HP%4d\n", HP1);
			y = 0;
			t = 0;
		}
		if (HP1 <= 0 || HP2 <= 0) {
			break;
		}
	}
}