#include<stdio.h>
main()
{
	int HP1 = 2000, HP2 = 2000, i = 0, t = 0, cnt = 0, k = 100, y = 0, h = 20, d;
	int a[] = { 5,7,10,15,21,27,30,38,40,42,49,50,53,55 };
	int b[] = { 2,6,12,14,20,25,32,39,41,43,48,49,52,55 };
	int b[1][2] = { { 39,6,12,43,20,52,32 } { 2,41,14,48,49,25,55 } }
	printf("HP2000の敵が現れた\n");

	while(1) {
		if (HP1 <= 0 || HP2 <= 0) {
			break;
		}
		cnt++;
		printf("(1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
		printf(" 3:相手の攻撃を回避　　　　　　　　  4:少し回復)\nどうする");
		scanf("%d", &d);
		switch(d){
		case 1:
			for (i=0; a[i] <= 55; i++) {
				if (cnt == a[i]) {
					HP2 -= k * 2;
					printf("\n敵に200ダメージ\n");
					t = 1;
					break;
				}
			}
			if(t == 0) {
				printf("\n攻撃が外れた\n");
			}
			break;
		case 2:
			for (i=0; a[i] <= 55; i++) {
				if (cnt != a[i]) {
					HP2 -= k;
					printf("\n敵に100ダメージ\n");
					t = 1;
					break;
				}
			}
			if(t == 0) {
				printf("\n攻撃が外れた\n");
			}
		break;
		case 3:
			printf("\n自分は身構えた\n");
			for (i = 0; a[i] <= 55; i++) {
				if (cnt != a[i]) {
					y = 1;
				}
			}
		break;
		case 4:
			HP1 += k / 2;
			printf("\n自分のHPが少し回復\n");
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
							printf("\n自分に200ダメージ\n");
							t = 1;
							break;
						}
					}
					if (t == 0) {
						printf("\n攻撃が外れた\n");
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
								printf("\n自分に100ダメージ\n");
								t = 1;
								break;
							}
						}
					}
					if (t == 0) {
						printf("\n攻撃が外れた\n");
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
							printf("\n敵のHPが少し回復\n");
							t = 1;
							break;
						}
					}
					if (t == 0) {
						printf("\n敵は何もしなかった\n");
					}
					t += 1;
				}
				if (t >= 1) {
					break;
				}
			}
		}

		printf("\n敵のHP%d\n", HP2);
		printf("自分のHP%d\n", HP1);
		y = 0;
		t = 0;
	}

}