//1102020kadai036.c
#include<stdio.h>
main()
{
	int ia, ib;
	printf("����1?");
	scanf("%d", &ia);
	printf("����2?");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%d��%d���%d�傫���ł�\n", ia, ib,ia - ib);
	}
	else if(ia == ib){
		printf("%d��%d�͓������ł�\n", ia, ib);
	}
	else if (ia < ib) {
		printf("%d��%d���%d�������ł�\n", ia, ib, ib - ia);
	}
}