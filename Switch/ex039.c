#include<stdio.h>
main()
{
	int s1, s2, s3;
	char c; float ;
	printf("処理を入力:");
	scanf("%c", &c); 
	if (c = 'd' || c = 'D' || c = 's' || c = 'S' || c = 'g' || c = 'G' || c = 'h' || c = 'H') {
		printf("整数を入力:");
		scanf("%d%d%d", &s1, &s2, &s3);
		switch (c) {
		case 'd':
		case 'D':
			if (s1 > s2) {
				if (s1 > s3) {
					printf("最大値は　%d　です", s1);
				}
				else {
					printf("最大値は　%d　です", s3);
				}
			}
			else {
				if (s2 > s3) {
					printf("最大値は　%d　です", s2);
				}
				else {
					printf("最大値は　%d　です", s3);
				}
			}
			break;
		case 's':
		case 'S':
			if (s1 < s2) {
				if (s1 < s3) {
					printf("最小値は　%d　です", s1);
				}
				else {
					printf("最小値は　%d　です", s3);
				}
			}
			else {
				if (s2 < s3) {
					printf("最小値は　%d　です", s2);
				}
				else {
					printf("最小値は　%d　です", s3);
				}
			}
			break;
		case 'g':
		case 'G':
			printf("合計は　%d　です", s1 + s2 + s3);
		case 'h':
		case 'H':
			printf("平均は　%.2f　です", (s1 + s2 + s3) / 3.0);
			break;
		}
	}
	else {
		printf("エラー")
	}
}