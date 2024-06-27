#include<stdio.h>

main()
{
	int no;
	printf("整数を入力:");
	scanf("%d,",&no);
	if (no < 0) {
		printf("入力値は、マイナスです\n");
	}
	else {
		printf("入力値は、プラスです\n");
	}
}