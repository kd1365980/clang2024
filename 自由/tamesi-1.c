#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define X 5
main()
{
	int kai=5, skai, HP1 = 2000, HP2, mHP1 = HP1, mHP2, i = 0, j, t = 0, u = 0, k1 = 100, k2 = 100, y = 0, h = 20, d, r, r1, a1, a2;
	int Lv = 1, cnt = 0, cnti = -5, kc, kup, bup, bup1, c, clear = 0, li = 0, ims, imc = 1, f = 0, sp, ssp, sr, sn[4] = { 0,7,7,7 };
	int im[X] = { 10,0,0,0,0 }, imFlg[X], spFlg = 0, * psn, spc;
	char* pim[X] = { "�񕜖�","�񕜖��","�h����","��֒e","�K���o�b�g" };
	srand(time(0));
	sp = 0;
	ssp = 0;
	imc = 1;
	while (1) {
		if (kai % 5 == 0) {
			printf("\n�V���b�v\n");
			imFlg[0] = 0, imFlg[1] = 0, imFlg[2] = 0, imFlg[3] = 0, imFlg[4] = 0, imFlg[5] = 0;

			printf("\n      �A�C�e��    �@ ������      �l�i\n");
			if (sp == 0) {
				for (i = 1; i <= 3; i++) {
					spFlg = 0;
					sr = rand() % X;
					for (j = 0; j <= 3; j++) {
						if (sn[j] == sr) {
							spFlg = 1;
							break;
						}
					}
					if (spFlg == 0) {
						sn[i] = sr;
					}
					else if (spFlg == 1) {
						i -= 1;
					}
				}
			}
			psn = sn;
			spc = 0;
			while (spc <= 3) {
					printf("%d      %s   �@     %d\n", spc + 1, pim[*psn], im[*psn]);
					imFlg[*psn] = spc + 1;
					*(psn += 1);
					spc += 1;
			}
			printf("%d      �X���o��\n\n", spc + 1);
			printf("�ǂ�ɂ��܂���(1��):");
			scanf("%d", &ssp);
			if (ssp == spc + 1) {
				printf("\n�X���o��\n");
				break;
			}
			//�A�C�e��
			for (i = 0; i < X; i++) {
				if (ssp == imFlg[i]) {
					if (i == 2) {
						im[i] += 1;
					}
					else {
						im[i] += 5;
					}
					printf("%s�𔃂���\n", pim[i]);
				}
			}
		}
		if (ssp > i) {
			printf("\n���̃R�}���h�͂���܂���B������x\n\n");
			sp = 1;
		}
		else {
			break;
		}
	}
	//�A�C�e��
	for (i = 0; i < X; i++) {
			printf("%s      %d\n", pim[i], im[i]);
	}
}