#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kai, HP1 = 2000, HP2, mHP1 = HP1, mHP2, i = 0, t = 0, u = 0, k1 = 100, k2 = 100, y = 0, h = 20, d, r, r1, a1, a2;
	int Lv = 1, cnt = 0;
	printf("�o�g������ւ悤����\n");
	for (kai = 1; kai <= 5; kai++) {
		printf("\n%d���\n", kai);
		srand(time(0));
		rand();
		HP2 = (rand() % 30 + 1) * 10 + kai * 1500;
		printf("HP%d�̓G�����ꂽ\n", HP2);
		mHP2 = HP2;
		if (cnt >= 50) {
			printf("LvUP\n");
			mHP1 += 500;
			HP1 = mHP1;
			k1 += 50;
			cnt = 0;
		}


		while (1) {
			u = 0;
			srand(time(0));
			rand();
			r = rand() % 10 + 1;
			r1 = rand() % 3 + 1;
			a1 = rand() % 5;
			a2 = rand() % 5;
			printf("(1:�G�ɑ�_���[�W(�������₷��)�@�@2:���_���[�W(�قړ�����)\n");
			printf(" 3:���̍U��������@�@�@�@�@�@�@�@�@  4:������)\n�ǂ�����");
			scanf("%d", &d);
			switch (d) {
			case 1:
				if (r == 1 || r == 3 || r == 6) {
					HP2 -= k1 * 2 + a1 * 20;
					if (a1 == 4) {
						printf("�}���ɓ�������\n�G��280�_���[�W\n");
					}
					else {
						printf("\n�G��%d�_���[�W\n", k1 * 2 + a1 * 20);
					}
					t = 1;
					break;
				}
				if (t == 0) {
					printf("\n�U�����O�ꂽ\n");
				}
				break;
			case 2:
				if (r != 1 || r != 3 || r != 6) {
					HP2 -= k1 + a1 * 20;
					if (a1 == 4) {
						printf("�}���ɓ�������\n�G��180�_���[�W\n");
					}
					else {
						printf("\n�G��%d�_���[�W\n", k1 + a1 * 20);
					}
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
				HP1 += k1 + a1 * 10;
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
							HP1 -= k2 * 2 + a2 * 20;
							if (a2 == 4) {
								printf("�}���ɓ�������\n�v���C���[��280�_���[�W\n");
							}
							else {
								printf("\n�v���C���[��%d�_���[�W\n", k2 * 2 + a2 * 20);
							}
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
							HP1 -= k2 + a2 * 20;
							if (a2 == 4) {
								printf("�}���ɓ�������\n�v���C���[��180�_���[�W\n");
							}
							else {
								printf("\n�v���C���[��%d�_���[�W\n", k2 + a2 * 20);
							}
							t = 1;
						}
					}

					if (t == 0) {
						printf("\n�U�����O�ꂽ\n");
					}
				}

				if (r1 == 3) {
					if (r != 1 || r != 3 || r != 6 || r != 9) {
						if (HP2 < mHP2) {
							if (HP2 + k2 + a2 * 10 >= mHP2) {
								HP2 = mHP2;
							}
							else {
								HP2 += k2 + a2 * 10;
							}
							printf("\n�G��HP��������\n");
							t = 1;
						}
					}
					if (t == 0) {
						printf("\n�G�͉������Ȃ�����\n");
					}
				}
				cnt += 1;

				if (HP1 <= 0) {
					printf("�v���C���[�͎���ł��܂���\n");
					printf("\n�G�́@�@�@�@HP%4d\n", HP2);
					printf("�v���C���[��HP   0\n", HP1);
					break;
				}
				if (HP2 <= 0) {
					printf("�G��|����\n");
					printf("\n�G�́@�@�@�@HP   0\n", HP2);
					printf("�v���C���[��HP%4d\n", HP1);
					break;
				}
				printf("\n�G�́@�@�@�@HP%4d\n", HP2);
				printf("�v���C���[��HP%4d\n", HP1);
				y = 0;
				t = 0;
			}
			if (HP1 <= 0 || HP2 <= 0) {
				break;
			}
		}
		if (HP1 <= 0) {
			break;
		}
	}
	if (kai == 5 && HP2 <= 0) {
		printf("\n          �`�����s�I��\n");
		if (HP1 <= 0) {
			printf("�����ĒN�����Ȃ��Ȃ���");
		}
	}
}