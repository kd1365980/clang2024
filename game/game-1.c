#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int HP1 = 2000, HP2 = 2000, i = 0, t = 0, u = 0, k = 100, y = 0, h = 20, d, r, r1;
	printf("HP2000の敵が現れた\n");

	while (1) {
		u = 0;
		srand(time(0));
		rand();
		r = rand() % 10 + 1;
		r1 = rand() % 3 + 1;
		printf("(1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
		printf(" 3:相手の攻撃を回避　　　　　　　　  4:少し回復)\nどうする");
		scanf("%d", &d);
		switch (d) {
		case 1:
			if (r == 1 || r == 3 || r == 6) {
				HP2 -= k * 2;
				printf("\n敵に200ダメージ\n");
				t = 1;
				break;
			}
			if (t == 0) {
				printf("\n攻撃が外れた\n");
			}
			break;
		case 2:
			if (r != 1 || r != 3 || r != 6) {
				HP2 -= k;
				printf("\n敵に100ダメージ\n");
				t = 1;
				break;
			}
			if (t == 0) {
				printf("\n攻撃が外れた\n");
			}
			break;
		case 3:
			printf("\nプレイヤーは身構えた\n");
			if (r != 1 || r != 3 || r != 6) {
				y = 1;
			}
			break;
		case 4:
			HP1 += k;
			printf("\nプレイヤーのHPが少し回復\n");
			break;
		default:
			printf("そのコマンドはありません。もう一度\n");
			u += 1;
		}
		t = 0;
		if (u == 0) {
			if (r1 == 1) {
				if (y == 0) {
					if (r == 1 || r == 3 || r == 6) {
						HP1 -= k * 2;
						printf("\nプレイヤーに200ダメージ\n");
						t = 1;
					}
				}
				if (t == 0) {
					printf("\n攻撃が外れた\n");
				}
			}
			t = 0;

			if (r1 == 2) {
				if (y == 0) {
					if (r != 1 || r != 3 || r != 6) {
						HP1 -= k;
						printf("\nプレイヤーに100ダメージ\n");
						t = 1;
					}
				}

				if (t == 0) {
					printf("\n攻撃が外れた\n");
				}
			}

			if (r1 == 3) {
				if (r != 1 || r != 3 || r != 6 || r != 9) {
					HP2 += k / 2;
					printf("\n敵のHPが少し回復\n");
					t = 1;
				}
				if (t == 0) {
					printf("\n敵は何もしなかった\n");
				}
			}
			if (HP1 <= 0) {
				printf("プレイヤーは死んでしまった\n");
				break;
			}
			if (HP2 <= 0) {
				printf("敵を倒した\n");
					break;
			}
			printf("\n敵のHP　　　　%4d\n", HP2);
			printf("プレイヤーのHP%4d\n", HP1);
			y = 0;
			t = 0;
		}
		if (HP1 <= 0 || HP2 <= 0) {
			break;
		}
	}
}