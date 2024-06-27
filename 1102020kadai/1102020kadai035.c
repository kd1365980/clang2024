//1102020kadai035.c
#include<stdio.h>
main()
{
	int ia;
	printf("整数");
	scanf("%d", &ia);
	if (ia > 0) {
		printf("入力値は「プラス」です\n");
	}
	else if(ia == 0){
		printf("入力値は「ゼロ」です\n");
	}
	else if (ia < 0) {
		printf("入力値は「マイナス」です\n");
	}
}