#include<stdio.h>

main()
{
	int ne;
	printf("��������:");
	scanf("%d,",&ne);
	ne = ne % 4;
	if (ne == 0) {
		printf("���邤�N�ł�\n");
	}
	else {
		printf("���邤�N�ł͂Ȃ��ł�\n");
	}
}