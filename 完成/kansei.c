#include<stdio.h>
#include<stdlib.h>
main()
{
	int kai, skai, HP1 = 2000, HP2, mHP1 = HP1, mHP2, i = 0, t = 0, u = 0, k1 = 100, k2 = 100, y = 0, h = 20, d, r, r1, a1, a2;
	int Lv = 1, cnt = 0, cnti = -5, kc, kup, bup, bup1, c, clear = 0, li=0;

	printf("バトル道場へようこそ\n");
	//キャラクター選択
	printf("キャラクター選択\n");
	printf("① =1:敵に大ダメージ(避けられやすい)　　  2: 小ダメージ(ほぼ当たる)\n");
	printf("   3:次の攻撃を回避　　　　　　　　　     4:少し回復\n");
	printf("   5:必殺技　敵に攻撃力×20のダメージ\n\n");
	printf("② =1:敵に大ダメージ(避けられやすい)　 　 2: 小ダメージ(ほぼ当たる)\n");
	printf("   3:プレイヤーの　攻撃力強アップ (3回まで)  4:少し回復\n");
	printf("   5:必殺技　プレイヤーの攻撃力をさらに強化\n\n");
	printf("③ =1:敵に大ダメージ(避けられやすい)　 　 2: 小ダメージ(ほぼ当たる)\n");
	printf("   3:プレイヤーの　防御力アップ  (3回まで)  4:少し回復\n");
	printf("   5:必殺技　プレイヤーのダメージ無効(4ターン)\n\n");
	printf("誰にする");
	scanf("%d", &c);
	printf("何回戦しますか");
	scanf("%d", &skai);
	if (skai >= 99) {
		printf("無限モード")
	}
	for (kai = 1; kai <= skai; kai++) {
		if (skai >= 99) {
			kai -= 1;
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
				printf("攻撃力+50\n");
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
				printf("攻撃力+50\n");
				cnt = 0;
			}
		}
		printf("\n%d回戦\n", kai);
		rand();
		HP2 = (rand() % 100) * 10 + (kai / 2) * 1000;
		printf("HP%dの敵が現れた\n\n", HP2);
		mHP2 = HP2;


		while (1) {
			u = 0;
			rand();
			r = rand() % 10 + 1;
			r1 = rand() % 3 + 1;
			a1 = rand() % 5;
			a2 = rand() % 5;
			switch (c) {
				//キャラクター①
			case 1:
				printf("(1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
				printf(" 3:敵の攻撃を回避　　　　　　　　　  4:少し回復)\n");
				break;
				//キャラクター②
			case 2:
				printf("(1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
				printf(" 3:プレイヤーの攻撃力アップ(3回まで) 　  4:少し回復)\n");
				break;
				//キャラクター③
			case 3:
				printf("(1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
				printf(" 3:防御力アップ(3回まで)　　　　　   4:少し回復)\n");
			}
			if (c == 1) {
				if (li >= 30) {
					printf("   　　　　　　　　　5:必殺技\n");
				}
			}

			else {
				if (li >= 25) {
					printf("   　　　　　　　　　5:必殺技\n");
				}
			}
		}
			printf("どうする");
			scanf("%d", &d);
			printf("\n");
			switch (d) {
			case 1:
				if (r == 1 || r == 3 || r == 6) {
					HP2 -= k1 * 2 + a1 * 20 + kup;
					if (a1 == 4) {
						printf("急所に当たった\n敵に%dダメージ\n", k1 + a1 * 20 + kup);
					}
					else {
						printf("\n敵に%dダメージ\n", k1 * 2 + a1 * 20 + kup);
					}
					li += 2;
					t = 1;
				}
				if (t == 0) {
					printf("\n攻撃が外れた\n");
				}
				break;
			case 2:
				if (r != 1 || r != 3 || r != 6) {
					HP2 -= k1 + a1 * 20 + kup;
					if (a1 == 4) {
						printf("急所に当たった\n敵に%dダメージ\n", k1 + a1 * 20 + kup);
					}
					else {
						printf("\n敵に%dダメージ\n", k1 + a1 * 20 + kup);
					}
					li += 1;
					t = 1;
				}
				if (t == 0) {
					printf("\n攻撃が外れた\n");
				}
				break;
			case 3:
				switch (c) {
				//キャラクター①
				case 1:
					printf("\nプレイヤーは身構えた\n");
					if (r != 1 || r != 3 || r != 6) {
						y = 1;
					}
					break;
				//キャラクター②
				case 2:
					if (kc < 3) {
						printf("\nプレイヤーは筋トレをした\n");
						kup += 25;
						kc += 1;
					}
					else {
						printf("\nもう筋トレはできない\n");
					}
					break;
				//キャラクター③
				case 3:
					if (kc < 3) {
						printf("\nプレイヤーは更に服を着た\n");
						bup = 25;
						kc += 1;
					}
					else {
						printf("\nもう厚着できない\n");
					}
				}
				break;
			case 4:
				HP1 += k1 + a1 * 10;
				printf("\nプレイヤーのHPが少し回復\n");
				break;
			case 5:
				switch (c) {
				//キャラクター①
				case 1:
					if (li >= 30) {
						HP2 -= k1 * 20 + kup;
						//printf("奥義");
						printf("\n敵に%dダメージ\n", k1 * 20 + kup);
						t = 1;
						break;
					}
				//キャラクター②
				case 2:
					if (li >= 25) {
						kup += 75;
						//printf("奥義");
						printf("\nプレイヤーはムキムキになった\n");
						t = 1;
						break;
					}
				//キャラクター③
				case 3:
					if (li >= 25) {
						bup1 = bup;
						//printf("奥義");
						printf("\nプレイヤーは無敵になった\n");
						cnti = cnt;
						t = 1;
						break;
					}
				}
			default:
				if (t == 0) {
					printf("\nそのコマンドはありません。もう一度\n\n");
					u += 1;
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
				printf("敵を倒した\n");
				printf("\n    敵の　　HP   0\n", HP2);
				printf("プレイヤーのHP%4d\n", HP1);
				if (kai <= 5) {
					clear = 1;
				}
				break;
			}


			//敵
			if (u == 0) {
				if (r1 == 1) {
					if (y == 0) {
						if (r == 1 || r == 3 || r == 6) {
							HP1 -= k2 * 2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("急所に当たった\nプレイヤーに%dダメージ\n", k2 * 2 + a2 * 20 - bup);
							}
							else {
								printf("\nプレイヤーに%dダメージ\n", k2 * 2 + a2 * 20 - bup);
							}
							t = 1;
						}
					}
					else if (y == 2) {
						printf("\nプレイヤーに0ダメージ\n");
						t = 1;
					}
					if (t == 0) {
						printf("\n攻撃が外れた\n");
					}
				}
				t = 0;

				if (r1 == 2) {
					if (y == 0) {
						if (r != 1 || r != 3 || r != 6) {
							HP1 -= k2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("急所に当たった\nプレイヤーに%dダメージ\n", k2 + a2 * 20 - bup);
							}
							else {
								printf("\nプレイヤーに%dダメージ\n", k2 + a2 * 20 - bup);
							}
							t = 1;
						}
					}
					else if (y == 2) {
						printf("\nプレイヤーに0ダメージ\n");
						t = 1;
					}
					if (t == 0) {
						printf("\n攻撃が外れた\n");
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
							printf("\n敵のHPが少し回復\n");
							t = 1;
						}
					}
					if (t == 0) {
						printf("\n敵は何もしなかった\n");
					}
				}
				cnt += 1;

				if (HP1 <= 0) {
					printf("プレイヤーは死んでしまった\n");
					printf("\n    敵の 　HP%4d\n", HP2);
					printf("プレイヤーのHP   0\n", HP1);
					break;
				}
				printf("\n    敵の　　HP%4d\n", HP2);
				printf("プレイヤーのHP%4d\n\n", HP1);
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
			printf("\n全員倒した\n");
	}
}