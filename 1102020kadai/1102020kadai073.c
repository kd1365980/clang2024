//1102020kadai073.c
#include<stdio.h>
main()
{
	int su;
	char c;
	printf("アルファベット:");
	scanf("%c", &c);
	printf("整数:");
	scanf("%d", &su);

	switch (c)
	{
	case 'o':
	case 'O':
		printf("%d\n", (su / 64) * 100 + ((su % 64) / 8) * 10 + su % 8);
		break;
	case 'h':
	case 'H':
		printf("%d\n", (su / 16) * 10 + su % 16);
		break;
	case 'd':
	case 'D':
	default:
		printf("%d\n", su);
		break;
	}
}