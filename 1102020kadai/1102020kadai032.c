//1102020kadai032.c
#include<stdio.h>
main()
{
	int ia;
	printf("整数?");
	scanf("%d", &ia);
	if (ia % 2 == 0) {
		printf("その数は「偶数」です\n", ia);
	}
	else{
		printf("その数は「奇数」です\n", ia);
	}
}