//1102020kadai037.c
#include<stdio.h>
main()
{
	int ia;
	printf("整数");
	scanf("%d", &ia);
	if (ia > 90) {
		printf("その数値の判定結果は「5」です\n");
	}
	else if (ia > 80) {
		printf("その数値の判定結果は「4」です\n");
	}
	else if (ia > 50) {
		printf("その数値の判定結果は「3」です\n");
	}
	else if (ia > 30) {
		printf("その数値の判定結果は「2」です\n");
	}
	else {
		printf("その数値の判定結果は「1」です\n");
	}
}