//1102020kadai044.c
#include<stdio.h>
main()
{
	int ia;
	printf("10�i���̐��l?");
	scanf("%d", &ia);
	while (ia != -999) {
		printf("8�i�� = %d         ", (ia / 64) * 100 + ((ia % 64) / 8) * 10 + ia % 8);
		printf("16�i�� = %d\n", (ia / 16) * 10 + ia % 16);
		printf("10�i���̐��l?");
		scanf("%d", &ia);
	}
}