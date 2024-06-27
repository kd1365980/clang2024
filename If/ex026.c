#include<stdio.h>
main()
{
	int m, y;
	printf("月を入力:");
	scanf("%d", &m);

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			printf("最終日は　31日です");
	}

	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		printf("最終日は　30日です");
	}

	else if (m == 2) {
		printf("年を入力:");
		scanf("%d", &y);

		if (y % 4 == 0) {
			printf("最終日は　29日です");
		}
		
		else {
			printf("最終日は　28日です");
		}
	}
	else {
		printf("そんな月はありません");
	}
}