//1102020kadai099.c
#include<stdio.h>
main()
{
	char a[10];
	int	kai, i;
	printf("�񐔂ƕ���������");
	scanf("%d%s", &kai, &a[0]);
	for (i = 0; i < kai; i++) {
		printf("%s\t", &a[0]);
	}
}