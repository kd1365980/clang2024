#include<stdio.h>

main()
{
	int ne;
	printf("西暦を入力:");
	scanf("%d,",&ne);
	if (ne >=1989) {
		printf("平成生まれです\n");
	}
	else {
		printf("昭和生まれです\n");
	}
}