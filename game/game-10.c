#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct shop_data {
	char name[20];
	int kosuu, kin,Flg;
};
#define N 6
#define X 6
main()
{
	struct shop_data im[X] = { {"�񕜖�",10,50,0},{"�񕜖��",0,100,0},{"�h����",0,500,0},{"��֒e",0,300,0},{"�K���o�b�g",0,200,0} };
	struct shop_data sobi[N] = { {"�����̃h���b�vUP",0,1000,0},{"�U����UP",0,1500,0},{"�h���UP",0,1500,0},{"���m���Œǉ��U��",0,2200,0},{"�^�_���[�W��10%��",0,3000,0}};
	int kai, skai, mugen = 0, HP1 = 2500, HP2, mHP1 = HP1, mHP2, i = 0, j, t = 0, u = 0, k1 = 100, k2 = 100, y = 0, h = 20, d, r, r1, a1, a2;
	int Lv = 1, cnt = 0, cnti = -5, kcnt, kup, bup, bup1, c, clear = 0, li = 0, ims, imc = 1, f = 0, sp, ssp, sr, sn1[4] = { 0,7,7,7 };
	int  kcin = 3000, pkcin = 0, spFlg = 0, * psn1, * psn2, spc, kcinup = 0;
	int sobiFlg[N], sobicnt = 0, sn2[2] = { 7,7 };

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
		if (skai >= 99 || mugen == 1) {
			if (kai == 1) {
				skai = 2;
				mugen = 1;
			}
			skai += 1;
		}
		kcnt = 0;
		kup = 0;
		bup = 0;
		bup1 = 0;
		if (Lv <= 4) {
			if (cnt >= 50) {
				printf("\nLvUP\n");
				printf("%d+500\n", mHP1);
				mHP1 += 500;
				HP1 = mHP1;
				printf("%d+50\n", k1);
				k1 += 50;
				cnt = 0;
			}
		}
		else if (Lv >= 5) {
			if (cnt >= 65) {
				printf("\nLvUP\n");
				printf("%d+500\n", mHP1);
				mHP1 += 500;
				HP1 = mHP1;
				printf("%d+50\n", k1);
				k1 += 50;
				cnt = 0;
			}
		}

		//�X
		if (kai % 1 == 0) {
			srand(time(0));
			ssp = 0;
			imc = 1;
			while (1) {
				printf("\n�V���b�v\n");
				if (i = 0; i <= N; i++) {
					im[i].Flg = 0;
					sobi[i].Flg = 0;
				}
				sp = 0;
				if (sp == 0) {
					for (i = 1; i <= 3; i++) {
						spFlg = 0;
						sr = rand() % (X - 1);
						for (j = 0; j <= 3; j++) {
							if (sn1[j] == sr) {
								spFlg = 1;
								break;
							}
						}
						if (spFlg == 0) {
							sn1[i] = sr;
						}
						else if (spFlg == 1) {
							i -= 1;
						}
					}
					if (sobicnt < 2) {
						for (i = 0; i <= 2; i++) {
							spFlg = 0;
							sr = rand() % (N - 1);
							for (j = 0; j <= 2; j++) {
								if (sn2[j] == sr) {
									spFlg = 1;
									break;
								}
							}
							if (sobi[sr].kosuu >= 1) {
								spFlg = 1;
							}
							if (spFlg == 0) {
								sn2[i] = sr;
							}
							if (spFlg == 1) {
								i -= 1;
							}
						}
					}
				}

				printf("\n      �A�C�e��    �@ ������      �l�i\n");
				psn1 = sn1;
				spc = 0;
				while (spc <= 3) {
					printf("%d      %s   �@     %d        %d\n\n", spc + 1, im[*psn1].name, im[*psn1].kosuu, im[*psn1].kin);
					imFlg[*psn1] = spc + 1;
					*(psn1 += 1);
					spc += 1;
				}
				if (sobicnt < 2) {
					printf("\n         ����    �@             �l�i\n");
					psn2 = sn2;
					while (spc <= 5) {
						printf("%d      %s   �@               %d\n\n", spc + 1, sobi[*psn2].name, sobi[*psn2].kin);
						sobiFlg[*psn2] = spc + 1;
						*(psn2 += 1);
						spc += 1;
					}
				}
				printf("%d      �X���o��\n\n", spc + 1);
				printf("%d�~\n", kcin);
				printf("�ǂ�ɂ��܂���(1��):");
				scanf("%d", &ssp);
				if (ssp == spc + 1) {
					printf("\n�X���o��\n");
					break;
				}

				//�A�C�e��
				if (ssp <= 4) {
					for (i = 0; i < X; i++) {
						if (ssp == imFlg[i]) {
							if (kcin < im[i].kin) {
								printf("����������܂���");
								sp = 1;
								break;
							}
							if (i == 2) {
								im[i].kosuu += 1;
							}
							else if (i != 2) {
								im[i].kosuu += 5;
							}
							if (kcin >= im[i].kin) {
								kcin -= im[i].kin;
								printf("%s�𔃂���\n", im[i].name);
							}
						}
					}
				}
				//����
				else {
					if (sobicnt < 2) {
						for (i = 0; i < N; i++) {
							if (ssp == sobiFlg[i]) {
								if (kcin < sobi[i].kin) {
									printf("����������܂���");
									sp = 1;
									break;
								}
								if (kcin >= sobi[i].kin) {
									kcin -= sobi[i].kin;
									sobi[i].kosuu = 1;
									sobicnt += 1;
									printf("%s�𔃂���\n", sobi[i].name);
								}
							}
						}
					}
				}
				if (ssp > spc + 1) {
					printf("\n���̃R�}���h�͂���܂���B������x\n\n");
					sp = 1;
				}
				else if (sp == 0) {
					break;
				}
			}
		}

		//�������� �����̃h���b�vUP,�U����UP,�h���UP,��m���Œǉ��U��,�^�_���[�W��10%��
		if (sobi[0].kosuu == 1 && sobi[0].Flg == 0) {
			kcinup += 50;
			sobi[0].Flg = 1
		}
		if (sobi[1].kosuu == 1 && sobi[1].Flg == 0) {
			kup += 45;
			sobi[1].Flg = 1
		}
		if (sobi[2].kosuu == 1 && sobi[2].Flg == 0) {
			kup += 35;
			sobi[2].Flg = 1
		}
		

		printf("\n--------------------------------------------------\n");
		printf("\n%d����\n", kai);
		rand();
		HP2 = (rand() % 100) * 10 + (kai / 2) * 1000;
		printf("HP%d�̓G�����ꂽ\n\n", HP2);
		mHP2 = HP2;
		printf("    �G�́@�@HP%4d\n", HP2);
		printf("�v���C���[��HP%4d\n\n", HP1);

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
						printf("\n�}���ɓ�������\n�G��%d�_���[�W\n", k1 * 2 + a1 * 20 + kup);
					}
					else {
						printf("\n�G��%d�_���[�W\n", k1 * 2 + a1 * 20 + kup);
					}
					if (sobi[3].kosuu == 1) {
						if (r == 6) {
							HP2 -= k1 * 2 + a1 * 20 + kup;
							printf("\n�X��%d�_���[�W\n", k1 * 2 + a1 * 20 + kup);
							li += 2;
						}
					}
					if (sobi[4].kosuu == 1) {
						if (r == 6) {
							HP1 += (k1 * 2 + a1 * 20 + kup)/10;
							printf("\n%d��\n", (k1 * 2 + a1 * 20 + kup) / 10);
						}
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
						printf("\n�}���ɓ�������\n�G��%d�_���[�W\n", k1 + a1 * 20 + kup);
					}
					else {
						printf("\n�G��%d�_���[�W\n", k1 + a1 * 20 + kup);
					}
					if (sobi[3].kosuu == 1) {
						if (r == 4) {
							HP2 -= k1 + a1 * 20 + kup;
							printf("\n�X��%d�_���[�W\n", k1 + a1 * 20 + kup);
							li += 1;
						}
					}
					if (sobi[4].kosuu == 1) {
						if (r == 6) {
							HP1 += (k1 + a1 * 20 + kup) / 10;
							printf("\n%d��\n", (k1 + a1 * 20 + kup) / 10);
						}
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
					if (kcnt < 3) {
						printf("\n�v���C���[�͋؃g��������\n");
						kup += 25;
						kcnt += 1;
					}
					else {
						printf("\n�����؃g���͂ł��Ȃ�\n");
					}
					break;
				//�L�����N�^�[�B
				case 3:
					if (kcnt < 3) {
						printf("\n�v���C���[�͍X�ɕ��𒅂�\n");
						bup = 25;
						kcnt += 1;
					}
					else {
						printf("\n���������ł��Ȃ�\n");
					}
				}
				break;

			//�A�C�e��
			case 4:
				while (1) {
					imFlg[0] = 0, imFlg[1] = 0, imFlg[2] = 0, imFlg[3] = 0, imFlg[4] = 0, imFlg[5] = 0;
					imc = 1;
					printf("�A�C�e����\n");  
					for (i = 0; i < X; i++) {
						if (im[i].kosuu > 0) {
							printf("%d   %s: %2d\n", imc, im[i].name, im[i].kosuu);
							imFlg[i] = imc;
							imc += 1;
						}
					}
					
					printf("%d  �߂�\n\n", imc);
					printf("�ǂ��I��");
					scanf("%d", &ims);
					if (ims == imc) {
						u = 1;
						break;
					}
					//�A�C�e���@
					else if (ims == imFlg[0]) {
						if (HP1 < mHP1) {
							if (HP1 + 250 >= mHP1) {
								HP1 = mHP1;
							}
							else {
								HP1 += 250;
							}
							im[0].kosuu -= 1;
							printf("�񕜖�: %2d\n", im[0].kosuu);
							printf("\n�v���C���[��HP��������\n");
							t = 1;
						}
						if (t == 0) {
							printf("\n�����񕜂ł��Ȃ�\n");
							u = 1;
						}
						break;
					}
					//�A�C�e���A
					else if (ims == imFlg[1]) {
						if (HP1 < mHP1) {
							if (HP1 + 500 >= mHP1) {
								HP1 = mHP1;
							}
							else {
								HP1 += 500;
							}
							im[1].kosuu -= 1;
							printf("�񕜖�: %2d\n", im[1].kosuu);
							printf("\n�v���C���[��HP���傫����\n");
							t = 1;
						}
						if (t == 0) {
							printf("\n�����񕜂ł��Ȃ�\n");
							u = 1;
						}
						break;
					}
					//�A�C�e���B
					else if (ims == imFlg[2]) {
						im[2].kosuu -= 1;
						printf("�h����: %2d\n", im[2].kosuu);
						f += 1;
						printf("\n�h������g����\n");
						break;
					}
					//�A�C�e���C
					else if (ims == imFlg[3]) {
						im[3].kosuu -= 1;
						printf("��֒e: %2d\n", im[3].kosuu);
						if (r != 1 || r != 3 || r != 6) {
							HP2 -= 350;
							printf("\n��֒e����������\n");
							printf("�G��350�_���[�W\n");
						}
						break;
					}
					//�A�C�e���D
					else if (ims == imFlg[4]) {
						im[4].kosuu -= 1;
						printf("�K���o�b�g: %2d\n", im[4].kosuu);
						HP2 -= 140;
						printf("\n�K���o�b�g���g����\n�G��140�_���[�W");
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
				printf("\n�G��|����\n");
				printf("\n    �G�́@�@HP   0\n", HP2);
				printf("�v���C���[��HP%4d\n\n", HP1);
				if (kai >= skai) {
					clear = 1;
				}
				kcin += pkcin = (rand() % 9 + 1) * 10 + kcinup;
				printf("%d�~��ɓ��ꂽ\n", pkcin);
				printf("%d�~\n", kcin);
				printf("\n--------------------------------------------------\n");
				break;
			}


			//�G
			if (u == 0) {
				//���U��
				if (r1 == 1) {
					if (y == 0) {
						if (r == 1 || r == 3 || r == 6) {
							HP1 -= k2 * 2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("\n�}���ɓ�������\n�v���C���[��%d�_���[�W\n", k2 * 2 + a2 * 20 - bup);
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

				//�U��
				if (r1 == 2) {
					if (y == 0) {
						if (r != 1 || r != 3 || r != 6) {
							HP1 -= k2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("\n�}���ɓ�������\n�v���C���[��%d�_���[�W\n", k2 + a2 * 20 - bup);
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

				//��
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
					printf("\n�v���C���[�͎���ł��܂���\n");
					printf("\n    �G�� �@HP%4d\n", HP2);
					printf("�v���C���[��HP   0\n");
					if (f >= 1) {
						printf("\n�v���C���[�͕�������\n");
						HP1 = 100;
						f -= 1;
					}
				}
				if (HP1 <= 0 && f == 0) {
					break;
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
			printf("\n%d���ڂŎ���ł��܂���\n", kai);
			break;
		}
	}
	if (clear == 1) {
			printf("\n�S���|����\n");
	}
}