#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int HP1 = 2000, HP2, mHP1, mHP2, i = 0, t = 0, u = 0, k = 100, y = 0, h = 20, d, r, r1, a1, a2;
	srand(time(0));
	rand();
	HP2 = (rand() % 5 + 1) * 1000;
	printf("HP%dの敵が現れた\n",HP2);
	mHP2 = HP2;

	while (1) {
		u = 0;
		srand(time(0));
		rand();
		r = rand() % 10 + 1;
		r1 = rand() % 3 + 1;
		a1 = rand() % 5 ;
		a2 = rand() % 5;
		printf("(1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
		printf(" 3:相手の攻撃を回避　　　　　　　　  4:少し回復)\nどうする");
		scanf("%d", &d);
		switch (d) {
		case 1:
			if (r == 1 || r == 3 || r == 6) {
				HP2 -= k * 2 + a1 * 20;
				if (a1 == 4) {
					printf("急所に当たった\n敵に280ダメージ\n");
				}
				else {
					printf("\n敵に%dダメージ\n", k * 2 + a1 * 20);
				}
				t = 1;
				break;
			}
			if (t == 0) {
				printf("\n攻撃が外れた\n");
			}
			break;
		case 2:
			if (r != 1 || r != 3 || r != 6) {
				HP2 -= k + a1 * 20;
				if (a1 == 4) {
					printf("急所に当たった\n敵に180ダメージ\n");
				}
				else {
					printf("\n敵に%dダメージ\n", k + a1 * 20);
				}
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
			HP1 += k + a1 * 10;
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
						HP1 -= k * 2 + a2 * 20;
						if (a2 == 4) {
							printf("急所に当たった\nプレイヤーに280ダメージ\n");
						}
						else {
							printf("\nプレイヤーに%dダメージ\n", k * 2 + a2 * 20);
						}
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
						HP1 -= k + a2 * 20;
						if (a2 == 4) {
							printf("急所に当たった\nプレイヤーに180ダメージ\n");
						}
						else {
							printf("\nプレイヤーに%dダメージ\n", k + a2 * 20);
						}
						t = 1;
					}
				}

				if (t == 0) {
					printf("\n攻撃が外れた\n");
				}
			}

			if (r1 == 3) {
				if (r != 1 || r != 3 || r != 6 || r != 9) {
					if (HP2 < mHP2 ) {
						if(HP2 += k + a2 * 10 >= mHP2){
							HP2 = mHP2;
						}
						else {
							HP2 += k + a2 * 10;
						}
						printf("\n敵のHPが少し回復\n");
						t = 1;
					}
				}
				if (t == 0) {
					printf("\n敵は何もしなかった\n");
				}
			}
			if (HP1 <= 0) {
				printf("プレイヤーは死んでしまった\n");
				printf("\n敵の　　　　HP%4d\n", HP2);
				printf("プレイヤーのHP0\n", HP1);
				break;
			}
			if (HP2 <= 0) {
				printf("敵を倒した\n");
				printf("\n敵の　　　　HP0\n", HP2);
				printf("プレイヤーのHP%4d\n", HP1);
					break;
			}
			printf("\n敵の　　　　HP%4d\n", HP2);
			printf("プレイヤーのHP%4d\n", HP1);
			y = 0;
			t = 0;
		}
		if (HP1 <= 0 || HP2 <= 0) {
			break;
		}
	}
}