#include<stdio.h>
main()
{
	int HP1 = 2000, HP2 = 2000, i = 0, t = 0, cnt = 0, k = 100, y = 0, h = 20, d;
	int a[] = { 5,7,10,15,21,27,30,38,40,42,49,50,53,55 };
	int b[] = { 2,6,12,14,20,25,32,39,41,43,48,49,52,55 };
	int b[1][2] = { { 39,6,12,43,20,52,32 } { 2,41,14,48,49,25,55 } }
	printf("HP2000�̓G�����ꂽ\n");

	while(1) {
		if (HP1 <= 0 || HP2 <= 0) {
			break;
		}
		cnt++;
		printf("(1:�G�ɑ�_���[�W(�������₷��)�@�@2:���_���[�W(�قړ�����)\n");
		printf(" 3:����̍U��������@�@�@�@�@�@�@�@  4:������)\n�ǂ�����");
		scanf("%d", &d);
		switch(d){
		case 1:
			for (i=0; a[i] <= 55; i++) {
				if (cnt == a[i]) {
					HP2 -= k * 2;
					printf("\n�G��200�_���[�W\n");
					t = 1;
					break;
				}
			}
			if(t == 0) {
				printf("\n�U�����O�ꂽ\n");
			}
			break;
		case 2:
			for (i=0; a[i] <= 55; i++) {
				if (cnt != a[i]) {
					HP2 -= k;
					printf("\n�G��100�_���[�W\n");
					t = 1;
					break;
				}
			}
			if(t == 0) {
				printf("\n�U�����O�ꂽ\n");
			}
		break;
		case 3:
			printf("\n�����͐g�\����\n");
			for (i = 0; a[i] <= 55; i++) {
				if (cnt != a[i]) {
					y = 1;
				}
			}
		break;
		case 4:
			HP1 += k / 2;
			printf("\n������HP��������\n");
			break;
		default:
			cnt -= 1;
		}
		t = 0;

		for (i = 0; b[i] <= 55; i++) {
			if (cnt == a[i]) {
				for (i = 0; b[i] <= 55; i++) {
					if (cnt == b[i]) {
						if (y == 0) {
							HP1 -= k * 2;
							printf("\n������200�_���[�W\n");
							t = 1;
							break;
						}
					}
					if (t == 0) {
						printf("\n�U�����O�ꂽ\n");
					}
				}
				break;
			}
			
			for (i = 0; b[i] <= 55; i++) {
				if (cnt != a[i]) {
					for (i = 0; b[i] <= 55; i++) {
						if (cnt != b[i]) {
							if (y == 0) {
								HP1 -= k;
								printf("\n������100�_���[�W\n");
								t = 1;
								break;
							}
						}
					}
					if (t == 0) {
						printf("\n�U�����O�ꂽ\n");
					}
					t += 1;
				}
				if (t >= 1) {
					break;
				}
			}
			for (i = 0; b[i] <= 55; i++) {
				if (cnt != a[i]) {
					for (i = 0; b[i] <= 55; i++) {
						if (cnt != a[i]) {
							HP2 += k / 2;
							printf("\n�G��HP��������\n");
							t = 1;
							break;
						}
					}
					if (t == 0) {
						printf("\n�G�͉������Ȃ�����\n");
					}
					t += 1;
				}
				if (t >= 1) {
					break;
				}
			}
		}

		printf("\n�G��HP%d\n", HP2);
		printf("������HP%d\n", HP1);
		y = 0;
		t = 0;
	}

}