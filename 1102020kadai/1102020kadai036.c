//1102020kadai036.c
#include<stdio.h>
main()
{
	int ia, ib;
	printf("整数1?");
	scanf("%d", &ia);
	printf("整数2?");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%dは%dより%d大きいです\n", ia, ib,ia - ib);
	}
	else if(ia == ib){
		printf("%dと%dは等しいです\n", ia, ib);
	}
	else if (ia < ib) {
		printf("%dは%dより%d小さいです\n", ia, ib, ib - ia);
	}
}