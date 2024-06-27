#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int j1, j2;
	printf("(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &j1);
	srand(time(0));
	rand();
	j2= rand() % 3 + 1;
	if (j1 == 1) {
		if (j2 == 1) {
			printf("プレイヤーはグーです\n");
			printf("コンピュータはグーです\n");
			printf("あいこです\n");
		}
		if (j2 == 2) {
			printf("プレイヤーはグーです\n");
			printf("コンピュータはチョキです\n");
			printf("プレイヤーの勝ちです\n");
		}
		if (j2 == 3) {
			printf("プレイヤーはグーです\n");
			printf("コンピュータはパーです\n");
			printf("コンピュータの勝ちです\n");
		}
	}
	if (j1 == 2) {
		if (j2 == 1) {
			printf("プレイヤーはチョキです\n");
			printf("コンピュータはグーです\n");
			printf("コンピュータの勝ちです\n");
		}
		if (j2 == 2) {
			printf("プレイヤーはチョキです\n");
			printf("コンピュータはチョキです\n");
			printf("あいこです\n");
		}
		if (j2 == 3) {
			printf("プレイヤーはチョキです\n");
			printf("コンピュータはパーです\n");
			printf("プレイヤーの勝ちです\n");
		}
	}
	if (j1 == 3) {
		if (j2 == 1) {
			printf("プレイヤーはパーです\n");
			printf("コンピュータはグーです\n");
			printf("プレイヤーの勝ちです\n");
		}
		if (j2 == 2) {
			printf("プレイヤーはパーです\n");
			printf("コンピュータはチョキです\n");
			printf("コンピュータの勝ちです\n");
		}
		if (j2 == 3) {
			printf("プレイヤーはパーです\n");
			printf("コンピュータはパーです\n");
			printf("あいこです\n");
		}
	}
}