//1102020kadai043.c
#include<stdio.h>
main()
{
	int a = 0;
	printf("�����R�[�h(-1�ŏI��):");
	scanf("%d", &a);
	while (a != -1) {
		printf("%c\n", (char)a);
		printf("�����R�[�h(-1�ŏI��):");
		scanf("%d", &a);
	}
}