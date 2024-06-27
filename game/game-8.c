#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define X 6
main()
{
	int kai, skai, mugen = 0, HP1 = 2500, HP2, mHP1 = HP1, mHP2, i = 0, j, t = 0, u = 0, k1 = 100, k2 = 100, y = 0, h = 20, d, r, r1, a1, a2;
	int Lv = 1, cnt = 0, cnti = -5, kcnt, kup, bup, bup1, c, clear = 0, li = 0, ims, imc = 1, f = 0, sp, ssp, sr, sn[4] = { 0,7,7,7 };
	int im[X] = { 10,0,0,0,0 }, kcin = 300, pkcin = 0, spkc[X] = { 50,100,500,50,150 }, imFlg[X], spFlg = 0, * psn, spc;
	char* pim[X] = { "回復薬小","回復薬大","蘇生薬","手榴弾","必中バット" };

	printf("バトル道場へようこそ\n");
	//キャラクター選択
	printf("キャラクター選択\n");
	printf("① =1:敵に大ダメージ(避けられやすい)　　  2: 小ダメージ(ほぼ当たる)\n");
	printf("   3:次の攻撃を回避　　　　　　　　　     4:アイテム\n");
	printf("   5:必殺技　敵に攻撃力×20のダメージ\n\n");
	printf("② =1:敵に大ダメージ(避けられやすい)　 　 2: 小ダメージ(ほぼ当たる)\n");
	printf("   3:プレイヤーの　攻撃力強アップ (3回まで)  4:アイテム\n");
	printf("   5:必殺技　プレイヤーの攻撃力をさらに強化\n\n");
	printf("③ =1:敵に大ダメージ(避けられやすい)　 　 2: 小ダメージ(ほぼ当たる)\n");
	printf("   3:プレイヤーの　防御力アップ  (3回まで)  4:アイテム\n");
	printf("   5:必殺技　プレイヤーのダメージ無効(4ターン)\n\n");
	printf("誰にする");
	scanf("%d", &c);
	printf("何回戦しますか");
	scanf("%d", &skai);
	if (skai >= 99) {
		printf("無限モード");
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
			if (cnt >= 60) {
				printf("\nLvUP\n");
				printf("%d+500\n", mHP1);
				mHP1 += 500;
				HP1 = mHP1;
				printf("%d+50\n", k1);
				k1 += 50;
				cnt = 0;
			}
		}

		//店
		srand(time(0));
		sp = 0;
		ssp = 0;
		imc = 1;
		while (1) {
			if (kai % 5 == 0) {
				printf("\nショップ\n");
				imFlg[0] = 0, imFlg[1] = 0, imFlg[2] = 0, imFlg[3] = 0, imFlg[4] = 0, imFlg[5] = 0;

				printf("\n      アイテム    　 所持数      値段\n");
				if (sp == 0) {
					for (i = 1; i <= 3; i++) {
						spFlg = 0;
						sr = rand() % (X-1);
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
					printf("%d      %s   　     %d        %d\n\n", spc + 1, pim[*psn], im[*psn],spkc[*psn]);
					imFlg[*psn] = spc + 1;
					*(psn += 1);
					spc += 1;
				}
				printf("%d      店を出る\n\n", spc + 1);
				printf("%d円\n", kcin);
				printf("どれにしますか(1つ):");
				scanf("%d", &ssp);
				if (ssp == spc + 1) {
					printf("\n店を出た\n");
					break;
				}
				//アイテム
				for (i = 0; i < X; i++) {
					if (ssp == imFlg[i]) {
						if (kcin < spkc[i]) {
							printf("お金が足りません");
							sp = 1;
							break;
						}
						else if (i == 2) {
							im[i] += 1;
						}
						else if (i != 2) {
							im[i] += 5;
						}
						else if (kcin >= spkc[i]) {
							kcin -= spkc[i];
							printf("%sを買った\n", pim[i]);
						}
					}
				}
			}
			if (ssp > i) {
				printf("\nそのコマンドはありません。もう一度\n\n");
				sp = 1;
			}
			else {
				break;
			}
		}
		printf("\n--------------------------------------------------\n");
		printf("\n%d回戦目\n", kai);
		rand();
		HP2 = (rand() % 100) * 10 + (kai / 2) * 1000;
		printf("HP%dの敵が現れた\n\n", HP2);
		mHP2 = HP2;
		printf("    敵の　　HP%4d\n", HP2);
		printf("プレイヤーのHP%4d\n\n", HP1);

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
				printf("1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
				printf("3:敵の攻撃を回避　　　　　　　　　  4:アイテム\n");
				break;
			//キャラクター②
			case 2:
				printf("1:敵に大ダメージ(避けられやすい)　　  2:小ダメージ(ほぼ当たる)\n");
				printf("3:プレイヤーの攻撃力アップ(3回まで) 　4:アイテム\n");
				break;
			//キャラクター③
			case 3:
				printf("1:敵に大ダメージ(避けられやすい)　　2:小ダメージ(ほぼ当たる)\n");
				printf("3:防御力アップ(3回まで)　　　　　   4 : アイテム\n");
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
			printf("どうする");
			scanf("%d", &d);
			printf("\n");
			switch (d) {

			//大攻撃
			case 1:
				if (r == 1 || r == 3 || r == 6) {
					HP2 -= k1 * 2 + a1 * 20 + kup;
					if (a1 == 4) {
						printf("\n急所に当たった\n敵に%dダメージ\n", k1 * 2 + a1 * 20 + kup);
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

			//小攻撃
			case 2:
				if (r != 1 || r != 3 || r != 6) {
					HP2 -= k1 + a1 * 20 + kup;
					if (a1 == 4) {
						printf("\n急所に当たった\n敵に%dダメージ\n", k1 + a1 * 20 + kup);
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
			//固有能力
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
					if (kcnt < 3) {
						printf("\nプレイヤーは筋トレをした\n");
						kup += 25;
						kcnt += 1;
					}
					else {
						printf("\nもう筋トレはできない\n");
					}
					break;
				//キャラクター③
				case 3:
					if (kcnt < 3) {
						printf("\nプレイヤーは更に服を着た\n");
						bup = 25;
						kcnt += 1;
					}
					else {
						printf("\nもう厚着できない\n");
					}
				}
				break;

			//アイテム
			case 4:
				while (1) {
					imFlg[0] = 0, imFlg[1] = 0, imFlg[2] = 0, imFlg[3] = 0, imFlg[4] = 0, imFlg[5] = 0;
					imc = 1;
					printf("アイテム覧\n");  
					for (i = 0; i < X; i++) {
						if (im[i] > 0) {
							printf("%d   %s: %2d\n", imc, pim[i], im[i]);
							imFlg[i] = imc;
							imc += 1;
						}
					}
					
					printf("%d  戻る\n\n", imc);
					printf("どれを選ぶ");
					scanf("%d", &ims);
					if (ims == imc) {
						u = 1;
						break;
					}
					//アイテム①
					else if (ims == imFlg[0]) {
						if (HP1 < mHP1) {
							if (HP1 + 250 >= mHP1) {
								HP1 = mHP1;
							}
							else {
								HP1 += 250;
							}
							im[0] -= 1;
							printf("回復薬小: %2d\n", im[0]);
							printf("\nプレイヤーのHPが少し回復\n");
							t = 1;
						}
						if (t == 0) {
							printf("\nもう回復できない\n");
							u = 1;
						}
						break;
					}
					//アイテム②
					else if (ims == imFlg[1]) {
						if (HP1 < mHP1) {
							if (HP1 + 500 >= mHP1) {
								HP1 = mHP1;
							}
							else {
								HP1 += 500;
							}
							im[1] -= 1;
							printf("回復薬小: %2d\n", im[1]);
							printf("\nプレイヤーのHPが大きく回復\n");
							t = 1;
						}
						if (t == 0) {
							printf("\nもう回復できない\n");
							u = 1;
						}
						break;
					}
					//アイテム③
					else if (ims == imFlg[2]) {
						im[2] -= 1;
						printf("%d  蘇生薬: %2d\n", imc, im[2]);
						f += 1;
						printf("\n蘇生薬を使った\n");
						break;
					}
					//アイテム④
					else if (ims == imFlg[3]) {
						im[3] -= 1;
						printf("%d  手榴弾: %2d\n", imc, im[3]);
						if (r != 1 || r != 3 || r != 6) {
							HP2 -= 350;
							printf("\n手榴弾が当たった\n");
							printf("敵に350ダメージ\n");
						}
						break;
					}
					//アイテム⑤
					else if (ims == imFlg[4]) {
						im[4] -= 1;
						printf("%d  必中バット: %2d\n", imc, im[4]);
						HP2 -= 140;
						printf("\n必中バットを使った\n敵に140ダメージ");
						break;
					}
					else {
							printf("\nそのコマンドはありません。もう一度\n\n");
					}
				}
				break;

			//必殺技
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
				printf("\n敵を倒した\n");
				printf("\n    敵の　　HP   0\n", HP2);
				printf("プレイヤーのHP%4d\n\n", HP1);
				if (kai >= skai) {
					clear = 1;
				}
				kcin += pkcin = (rand() % 9 + 1) * 10;
				printf("%d円手に入れた\n", pkcin);
				printf("%d円\n", kcin);
				printf("\n--------------------------------------------------\n");
				break;
			}


			//敵
			if (u == 0) {
				//強攻撃
				if (r1 == 1) {
					if (y == 0) {
						if (r == 1 || r == 3 || r == 6) {
							HP1 -= k2 * 2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("\n急所に当たった\nプレイヤーに%dダメージ\n", k2 * 2 + a2 * 20 - bup);
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

				//攻撃
				if (r1 == 2) {
					if (y == 0) {
						if (r != 1 || r != 3 || r != 6) {
							HP1 -= k2 + a2 * 20 - bup;
							if (a2 == 4) {
								printf("\n急所に当たった\nプレイヤーに%dダメージ\n", k2 + a2 * 20 - bup);
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

				//回復
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
					printf("\nプレイヤーは死んでしまった\n");
					printf("\n    敵の 　HP%4d\n", HP2);
					printf("プレイヤーのHP   0\n");
					if (f >= 1) {
						printf("\nプレイヤーは復活した\n");
						HP1 = 100;
						f -= 1;
					}
				}
				if (HP1 <= 0 && f == 0) {
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
			printf("\n%d回戦目で死んでしまった\n", kai);
			break;
		}
	}
	if (clear == 1) {
			printf("\n全員倒した\n");
	}
}