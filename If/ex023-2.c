#include<stdio.h>

main()
{
	int ne;
	printf("西暦を入力:");
	scanf("%d,",&ne);
	ne = ne % 4;
	if (ne == 0) {
		printf("うるう年です\n");
	}
	else {
		printf("うるう年ではないです\n");
	}
}