#include<stdio.h>
#include<stdlib.h>
main()
{
	int kai, skai, HP1 = 2000, HP2, mHP1 = HP1, mHP2, i = 0, j, t = 0, u = 0, k1 = 100, k2 = 100, y = 0, h = 20, d, r, r1, a1, a2;
	int Lv = 1, cnt = 0, cnti = -5, kc, kup, bup, bup1, c, clear = 0, li = 0, ims, imc = 1, f = 0, sp, spc = 1, sps, sn[4] = { 7,7,7,7 };
	int im[10] = { 10,0,0,0,0,0,0,0,0 }, im1, im2, im3, im4, im5;

	printf("�o�g������ւ悤����\n");
	//�L�����N�^�[�I��
	printf("�L�����N�^�[�I��\n");
	printf("�@ =1:�G�ɑ�_���[�W(�������₷��)�@�@  2: ���_���[�W(�قړ�����)\n");
	printf("   3:���̍U��������@�@�@�@�@�@�@�@�@     4:�A�C�e��\n");
	printf("   5:�K�E�Z�@�G�ɍU���́~20�̃_���[�W\n\n");
	printf("�A =1:�G�ɑ�_���[�W(�������₷��)�@ �@ 2: ���_���[�W(�قړ�����)\n");
	printf("   3:�v���C���[�́@�U���͋��A�b�v (3��܂�)  4:�A�C�e��\n");
	printf("   5:�K�E�Z�@�v���C���[�̍U���͂�����ɋ���\n\n");
	printf("�B =1:�G�ɑ�_���[�W(�������₷��)�@ �@ 2: ���_���[�W(�قړ�����)\n");
	printf("   3:�v���C���[�́@�h��̓A�b�v  (3��܂�)  4:�A�C�e��\n");
	printf("   5:�K�E�Z�@�v���C���[�̃_���[�W����(4�^�[��)\n\n");
	printf("�N�ɂ���");
	scanf("%d", &c);
	printf("����킵�܂���");
	scanf("%d", &skai);
	if (skai >= 99) {
		printf("�������[�h");
	}
	for (kai = 1; kai <= skai; kai++) {
		if (skai >= 99) {
			skai += 1;
		}
		kc = 0;
		kup = 0;
		bup = 0;
		bup1 = 0;
		if (Lv <= 2) {
			if (cnt >= 50) {
				printf("\nLvUP\n");
				mHP1 += 500;
				HP1 = mHP1;
				k1 += 50;
				printf("HP+500\n");
				printf("�U����+50\n");
				cnt = 0;
			}
		}
		else if (Lv >= 3) {
			if (cnt >= 60) {
				printf("\nLvUP\n");
				mHP1 += 500;
				HP1 = mHP1;
				k1 += 50;
				printf("HP+500\n");
				printf("�U����+50\n");
				cnt = 0;
			}
		}

		//�X
		for (sp = 0; sp <= skai; sp + 5) {
			if (kai == sp){
				imc = 1;
				for (i = 0; i <= 4; i++) {
					rand();
					sp = rand() % 6;
					for (j = 0; j <= 5; j++) {
						if (sn[j] != sp) {
							sn[i] = sp;
							break;
						}
					}
					if (j == 5) {
						i -= 1;
					}
					else {
						switch (sn[i]) {
						//�A�C�e���@
						case 1:
							printf()
						}
					}
				}
				printf("�ǂ�ɂ��܂���(1��):");
				scanf("%d", sps);
				printf("�𔃂���")
				break;
			}
		}
		printf("\n%d���\n", kai);
		rand();
		HP2 = (rand() % 100) * 10 + (kai / 2) * 1000;
		printf("HP%d�̓G�����ꂽ\n\n", HP2);
		mHP2 = HP2;


		while (1) {
			u = 0;
			rand();
			r = rand() % 10 + 1;
			r1 = rand() % 3 + 1;
			a1 = rand() % 5;
			a2 = rand() % 5;
			switch (c) {
			//�L�����N�^�[�@
			case 1:
				printf("1:�G�ɑ�_���[�W(�������₷��)�@�@2:���_���[�W(�قړ�����)\n");
				printf("3:�G�̍U��������@�@�@�@�@�@�@�@�@  4:�A�C�e��\n");
				break;
			//�L�����N�^�[�A
			case 2:
				printf("1:�G�ɑ�_���[�W(�������₷��)�@�@  2:���_���[�W(�قړ�����)\n");
				printf("3:�v���C���[�̍U���̓A�b�v(3��܂�) �@4:�A�C�e��\n");
				break;
			//�L�����N�^�[�B
			case 3:
				printf("1:�G�ɑ�_���[�W(�������₷��)�@�@2:���_���[�W(�قړ�����)\n");
				printf("3:�h��̓A�b�v(3��܂�)�@�@�@�@�@   4 : �A�C�e��\n");
			}
			if (c == 1) {
				if (li >= 30) {
					printf("   �@�@�@�@�@�@�@�@�@5:�K�E�Z\n");
				}
			}

			else {
				if (li >= 25) {
					printf("   �@�@�@�@�@�@�@�@�@5:�K�E�Z\n");
				}
			}
			printf("�ǂ�����");
			scanf("%d", &d);
			printf("\n");
			switch (d) {

			//��U��
			case 1:
				if (r == 1 || r == 3 || r == 6) {
					HP2 -= k1 * 2 + a1 * 20 + kup;
					if (a1 == 4) {
						printf("�}���ɓ�������\n�G��%d�_���[�W\n", k1 * 2 + a1 * 20 + kup);
					}
					else {
						printf("\n�G��%d�_���[�W\n", k1 * 2 + a1 * 20 + kup);
					}
					li += 2;
					t = 1;
				}
				if (t == 0) {
					printf("\n�U�����O�ꂽ\n");
				}
				break;

			//���U��
			case 2:
				if (r != 1 || r != 3 || r != 6) {
					HP2 -= k1 + a1 * 20 + kup;
					if (a1 == 4) {
						printf("�}���ɓ�������\n�G��%d�_���[�W\n", k1 + a1 * 20 + kup);
					}
					else {
						printf("\n�G��%d�_���[�W\n", k1 + a1 * 20 + kup);
					}
					li += 1;
					t = 1;
				}
				if (t == 0) {
					printf("\n�U�����O�ꂽ\n");
				}
				break;
			//�ŗL�\��
			case 3:
				switch (c) {
				//�L�����N�^�[�@
				case 1:
					printf("\n�v���C���[�͐g�\����\n");
					if (r != 1 || r != 3 || r != 6) {
						y = 1;
					}
					break;
				//�L�����N�^�[�A
				case 2:
					if (kc < 3) {
						printf("\n�v���C���[�͋؃g��������\n");
						kup += 25;
						kc += 1;
					}
					else {
						printf("\n�����؃g���͂ł��Ȃ�\n");
					}
					break;
				//�L�����N�^�[�B
				case 3:
					if (kc < 3) {
						printf("\n�v���C���[�͍X�ɕ��𒅂�\n");
						bup = 25;
						kc += 1;
					}
					else {
						printf("\n���������ł��Ȃ�\n");
					}
				}
				break;

			//�A�C�e��
			case 4:
				while (1) {
					imc = 1;
					printf("�A�C�e����\n");  
					if (im[0] > 0) {
						printf("%d  �񕜖�: %2d\n", imc, im[0]);
						im1 = imc;
						imc += 1;
					}
					if (im[1] > 0) {
						printf("%d  �񕜖��: %2d\n", imc, im[1]);
						im2 = imc;
						imc += 1;
					}
					if (im[2] > 0) {
						printf("%d  �h����: %2d\n", imc, im[2]);
						im3 = imc;
						imc += 1;
					}
					if (im[3] > 0) {
						printf("%d  ��֒e: %2d\n", imc, im[3]);
						im4 = imc;
						imc += 1;
					}
					if (im[4] > 0) {
						printf("%d  �K���o�b�g: %2d\n", imc, im[4]);
						im5 = imc;
						imc += 1;
					}
					printf("%d  �߂�\n\n", imc);
					printf("�ǂ��I��");
					scanf("%d", &ims);
					if (ims == imc) {
						u = 1;
						break;
					}
					//�A�C�e���@
					else if (ims == im1) {
						im[0] -= 1;
						imc = im1;
						printf("%d  �񕜖�: %2d\n", imc, im[0]);
						HP1 += 150;
						printf("\n�v���C���[��HP��������\n");
						break;
					}
					//�A�C�e���A
					else if (ims == im2) {
						im[1] -= 1;
						imc = im2;
						printf("%d  �񕜖��: %2d\n", imc, im[1]);
						HP1 += 400;
						printf("\n�v���C���[��HP���傫����\n");
						break;
					}
					//�A�C�e���B
					else if (ims == im3) {
						im[2] -= 1;
						imc = im3;
						printf("%d  �h����: %2d\n", imc, im[2]);
						f += 1;
						printf("\n�h������g����\n");
						break;
					}
					//�A�C�e���C
					else if (ims == im4) {
						im[3] -= 1;
						imc = im4;
						printf("%d  ��֒e: %2d\n", imc, im[3]);
						if (r != 1 || r != 3 || r != 6) {
							HP2 -= 250;
							printf("\n��֒e����������\n");
							printf("�G��250�_���[�W\n");
						}
						break;
					}
					//�A�C�e���D
					else if (ims == im5) {
						im[4] -= 1;
						imc = im5;
						printf("%d  �K���o�b�g: %2d\n", imc, im[4]);
						HP2 -= 120;
						printf("\n�K���o�b�g���g����\n�G��120�_���[�W");
						break;
					}
					else {
							printf("\n���̃R�}���h�͂���܂���B������x\n\n");
					}
				}
				break;

			//�K�E�Z
			case 5:
				switch (c) {
				//�L�����N�^�[�@
				case 1:
					if (li >= 30) {
						HP2 -= k1 * 20 + kup;
						//printf("���`");
						printf("\n�G��%d�_���[�W\n", k1 * 20 + kup);
						t = 1;
						break;
					}
				//�L�����N�^�[�A
				case 2:
					if (li >= 25) {
						kup += 75;
						//printf("���`");
						printf("\n�v���C���[�̓��L���L�ɂȂ���\n");
						t = 1;
						break;
					}
				//�L�����N�^�[�B
				case 3:
					if (li >= 25) {
						bup1 = bup;
						//printf("���`");
						printf("\n�v���C���[�͖��G�ɂȂ���\n");
						cnti = cnt;
						t = 1;
						break;
					}
				}
			default:
				if (t == 0) {
					printf("\n���̃R�}���h�͂���܂���B������x\n\n");
					u = 1;
				}
				if (t == 1) {
					li = 0;
				}
			}
			t = 0;
			if (cnti > 0) {
				y = 2;
			}
			if (cnt == cnti + 3) {
					bup = bup1;
					cnti = -5;
			}

			if (HP2 <= 0) {
				printf("�G��|����\n");
				printf("\n    �G�́@�@HP   0\n", HP2);
				printf("�v���C���[��HP%4d\n", HP1);
				if (kai >= skai) {
					clear = 1;
				}
				break;
			}


			//�G
			if (u == 0) {
				if (r1 == 1) {
					if (y == 0) {
						if (r == 1 || r == 3 || r == 6) {
							HP1 -= k2 * 2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("�}���ɓ�������\n�v���C���[��%d�_���[�W\n", k2 * 2 + a2 * 20 - bup);
							}
							else {
								printf("\n�v���C���[��%d�_���[�W\n", k2 * 2 + a2 * 20 - bup);
							}
							t = 1;
						}
					}
					else if (y == 2) {
						printf("\n�v���C���[��0�_���[�W\n");
						t = 1;
					}
					if (t == 0) {
						printf("\n�U�����O�ꂽ\n");
					}
				}
				t = 0;

				if (r1 == 2) {
					if (y == 0) {
						if (r != 1 || r != 3 || r != 6) {
							HP1 -= k2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("�}���ɓ�������\n�v���C���[��%d�_���[�W\n", k2 + a2 * 20 - bup);
							}
							else {
								printf("\n�v���C���[��%d�_���[�W\n", k2 + a2 * 20 - bup);
							}
							t = 1;
						}
					}
					else if (y == 2) {
						printf("\n�v���C���[��0�_���[�W\n");
						t = 1;
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
				if(f == 0){
					if (HP1 <= 0) {
						printf("�v���C���[�͎���ł��܂���\n");
						printf("\n    �G�� �@HP%4d\n", HP2);
						printf("�v���C���[��HP   0\n");
						break;
					}
				}
				else{
					printf("�v���C���[�͕�������\n");
					HP1 = 100;
				}
				printf("\n    �G�́@�@HP%4d\n", HP2);
				printf("�v���C���[��HP%4d\n\n", HP1);
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
	if (clear == 1) {
			printf("\n�S���|����\n");
	}
}